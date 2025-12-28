import re
import os

# Configuration
folder_path = "./keys/blocks/"
blocks = [
    ('emoticons.h', 'S'),
    ('transport_and_map_symbols.h', 'T'),
    ('currency_symbols.h', 'C'),
    ('dingbats.h', 'D'),
    ('mahjong_tiles.h', 'J'),
    ('domino_tiles.h', 'O'),
    ('playing_cards.h', 'K'),
    ('chess_symbols.h', 'H'),
    ('miscellaneous_symbols_and_pictographs.h', 'M')
]

VOWELS = ['A', 'E', 'I', 'O', 'U']

def generate_leader_files():
    # --- ZMK Config Setup ---
    config_lines = [
        "/* Auto-generated Staggered Leader Key Sequences */",
        "leader: leader {", 
        "\tcompatible = \"zmk,behavior-leader-key\";",
        "\t#binding-cells = <0>;",
        "\ttimeout-ms = <2000>;",
        "\tpropagate-modifier;"
    ]
    
    # --- Markdown Setup ---
    md_lines = [
        "# ZMK Leader Key Cheat Sheet",
        "\nThis document lists all auto-generated leader sequences for Unicode symbols. The system uses a **Staggered Disambiguation Strategy** to ensure every sequence is unique and typable:",
        "1. **Base Initials**: Category Lead + first letter of each word.",
        "2. **Vowel Fill**: If the base is taken, a vowel (A, E, I, O, U) is appended.",
        "3. **Last Letter**: If vowels are exhausted, the last letter of the symbol name is appended.",
        "4. **Digit Fallback**: As a final resort, digit-by-digit numbers (e.g., `N1 N2`) are used.",
        "\n## Category Overview",
        "\n| Block Filename | Lead Key |",
        "| :--- | :---: |"
    ]
    
    for filename, char in blocks:
        md_lines.append(f"| {filename} | **{char}** |")

    global_registry = set()
    
    for filename, lead_char in blocks:
        full_path = os.path.join(folder_path, filename)
        if not os.path.exists(full_path): continue
            
        block_title = filename.replace('.h', '').replace('_', ' ').upper()
        config_lines.append(f"\n\t/* --- {block_title} --- */")
        md_lines.append(f"\n## {block_title}")
        md_lines.append("| Keys | Symbol |")
        md_lines.append("| :--- | :---: |")
        
        with open(full_path, 'r', encoding='utf-8') as f:
            content = f.read()
            
        # Regex to find define name, hex code, and the trailing comment containing the actual symbol
        matches = re.findall(r'#define\s+(\w+)\s+0x[0-9A-Fa-f]+\s+\d+\s+//\s+(.+)', content)
        
        for define_name, symbol in matches:
            parts = define_name.split('_')
            
            # Extract core name parts
            if parts[0] == 'UC' and len(parts) > 2:
                name_parts = parts[2:]
            elif parts[0] == 'UC' or parts[0] == 'LR':
                name_parts = parts[1:]
            else:
                name_parts = parts
                
            node_name = "_".join(name_parts).lower()
            
            # Base Initials
            initials = [lead_char]
            for p in name_parts:
                if p: initials.append(p[0].upper())
            base_seq = " ".join(initials)

            # DISAMBIGUATION HIERARCHY
            final_seq = base_seq
            
            # 1. Vowels
            if final_seq in global_registry:
                for v in VOWELS:
                    test_seq = f"{base_seq} {v}"
                    if test_seq not in global_registry:
                        final_seq = test_seq
                        break
            
            # 2. Last Letter
            if final_seq in global_registry:
                last_char = node_name[-1].upper()
                test_seq = f"{base_seq} {last_char}"
                if test_seq not in global_registry:
                    final_seq = test_seq
            
            # 3. Digit-by-digit
            counter = 1
            while final_seq in global_registry:
                digits = " ".join([f"N{d}" for d in str(counter)])
                final_seq = f"{base_seq} {digits}"
                counter += 1
            
            global_registry.add(final_seq)
            
            # Node name uniqueness
            node_check = re.sub(r'[^a-z0-9_]', '', node_name)
            n_inc = 2
            while any(node_check in line for line in config_lines if 'sequence =' in line):
                node_check = f"{node_name}_{n_inc}"
                n_inc += 1
            
            # Write to Config
            config_lines.append(f'\t{node_check} {{ sequence = <{final_seq}>; bindings = <&uc {define_name}>; }};')
            
            # Write to Markdown (Formatting the sequence to look like keys)
            kb_seq = " ".join([f"`{k}`" for k in final_seq.split()])
            md_lines.append(f"| {kb_seq} | {symbol} |")

    config_lines.append("};")
    
    # Save Files
    with open("generated_leader_sequences.dtsi", "w", encoding='utf-8') as f:
        f.write("\n".join(config_lines))
        
    with open("leader_cheat_sheet.md", "w", encoding='utf-8') as f:
        f.write("\n".join(md_lines))

if __name__ == "__main__":
    generate_leader_files()
    print("Success: 'generated_leader_sequences.dtsi' and 'leader_cheat_sheet.md' created.")
