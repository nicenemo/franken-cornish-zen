# ⌨️ Corne-ish Zen Configuration

This repository contains a high-performance ZMK keymap for the **Corne-ish Zen**. It is specifically optimized for ergonomic English typing via the `NGRAM` layout, scientific/APL programming, and a deep mnemonic-based Unicode input system.

---

## 🗺️ Physical Key Map
The following table represents the ZMK key indices (**0–41**) as they are mapped physically on the Corne-ish Zen. Use this as a reference for the `combos` and `behaviors` sections of the keymap.

| Row | Col 1 | Col 2 | Col 3 | Col 4 | Col 5 | Col 6 | | Col 7 | Col 8 | Col 9 | Col 10 | Col 11 | Col 12 |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **Top** | 0 | 1 | 2 | 3 | 4 | 5 | | 6 | 7 | 8 | 9 | 10 | 11 |
| **Mid** | 12 | 13 | 14 | 15 | 16 | 17 | | 18 | 19 | 20 | 21 | 22 | 23 |
| **Bot** | 24 | 25 | 26 | 27 | 28 | 29 | | 30 | 31 | 32 | 33 | 34 | 35 |
| | | | | | | | | | | | | | |
| **Thumb** | | | **36** | **37** | **38** | | | **39** | **40** | **41** | | | |

---

## ⚡ Active Combos
Hardware-level shortcuts activated by pressing multiple keys simultaneously. 

*Refer to the map above for key index positions:*

* **Leader Key**: `36` + `38` (Left Outer Thumb + Left Inner Thumb)
* **CONFIG Menu**: `24` + `35` (Far Bottom-Left corner + Far Bottom-Right corner)
* **APL/Math Toggle**: `30` + `35` (Right hand, bottom row, two rightmost keys)
* **PUNC_TYP Toggle**: `6` + `11` (Right hand, top row, outer edges)
* **SUP_EDT Toggle**: `1` + `5` (Left hand, top row, indices 1 and 5)

---

## 🔣 Unicode Leader System
The **Leader Key** allows for mnemonic sequences to input complex Unicode symbols. Tap the combo, followed by the category letter, then the specific character sequence.

| Category | Suffix | Block Description |
| :--- | :---: | :--- |
| **Emoticons** | `S` | Smiles, faces, and feline emoticons |
| **Transport** | `T` | Vehicles, map symbols, and travel signs |
| **Currency** | `C` | International currency signs |
| **Dingbats** | `D` | Arrows, flarettes, and ornamental marks |
| **Playing Cards** | `K` | Suits and specific card ranks |
| **Chess** | `H` | Pieces and board game symbols |
| **Miscellaneous** | `M` | Food, weather, objects, and pictographs |

[Leader cheatsheet](leader_cheatsheet.md)

---

## 🗺️ Layer Index
Based on the current configuration, the following layers are active:

| ID | Layer Name | Description |
| :--- | :--- | :--- |
| 0 | **NGRAM** | Default Alpha layer optimized for English frequencies |
| 1 | **QWERTY** | Standard alpha layout for legacy compatibility |
| 2 | **NUM** | Numbers and basic arithmetic |
| 3 | **KEYPAD** | Ten-key style calculator layout |
| 4 | **SYM1** | Primary symbols and brackets |
| 5 | **SYM2** | Supplemental coding and math symbols |
| 6 | **NAV** | Arrow keys and document navigation |
| 7 | **VOLUME** | Media keys, brightness, and audio controls |
| 8-13 | **FUN** | Function tiers (F1-F24), including Hyper/Super variants |
| 14 | **MOUSE** | Mouse movement and button emulation |
| 20 | **APL_BQN** | Specialized APL/BQN mathematical glyphs |
| 23-25 | **GREEK** | Triple-support for Modern, Archaic, and Coptic scripts |
| 26-29 | **PUNC/SUP** | Advanced punctuation and supplemental editing tools |

---

## 🛠️ Build Information
* **Compatible Firmware**: ZMK
* **Includes**: Integrates custom headers for math, punctuation, and consumer keys
* **Tapping Term**: Balanced home row modifiers (typical 175ms - 200ms)
