/* * ult_math_pro.h - Hyper7 R4 Professional Math Master Header
 * VERIFIED COUNT: 88 DEFINES (176 Codepoints)
 */

#pragma once

// === CLUSTER 1: APL & BQN (24 Defines) ===
#define UC_A_IOTA_RHO          0x2373 0x2374  // ⍳ / ⍴
#define UC_A_QUAD_CIRCLE       0x2395 0x25CB  // ⎕ / ○
#define UC_A_ALPHA_OMEGA       0x237A 0x2375  // ⍺ / ⍵
#define UC_A_U_ALPHA_OMEGA     0x2376 0x2379  // ⍶ / ⍹
#define UC_A_RANK_KEY          0x2364 0x2338  // ⍤ / ⌸
#define UC_A_SQUAD_ZILDE       0x2337 0x23AC  // ⌷ / ⍬
#define UC_A_JOT_DOT           0x2218 0x002E  // ∘ / .
#define UC_A_TACK_LEFT_RIGHT   0x22A3 0x22A2  // ⊣ / ⊢
#define UC_A_STILE_QUERY       0x2223 0x2370  // ∣ / ⍰
#define UC_A_TILDE_DIAMOND     0x2368 0x22C4  // ⍨ / ⋄
#define UC_A_LAMP_STAR         0x235D 0x22C6  // ⍝ / ⋆
#define UC_A_DEL_DELTA         0x2207 0x0394  // ∇ / Δ
#define UC_A_EP_UP_DN          0x2308 0x230A  // ⌈ / ⌊
#define UC_A_EXEC_PROMPT       0x234E 0x2363  // ⍎ / ⍣
#define UC_A_BASE_DECODE       0x22A5 0x22A4  // ⊥ / ⊤
#define UC_B_UNDER_TRANS       0x23B5 0x23B4  // ⎵ / ⎴
#define UC_B_GET_SET           0x21D0 0x21D2  // ⇐ / ⇒
#define UC_B_STRAND_NULL       0x203F 0x00B7  // ‿ / ·
#define UC_A_QD_DIV_QUOTE      0x2339 0x235E  // ⌹ / ⍞
#define UC_A_QD_READ_WRITE     0x2347 0x2348  // ⍇ / ⍈
#define UC_A_QD_SLOPE_BAR      0x2340 0x233F  // ⍀ / ⌿
#define UC_A_QD_PLUS_MINUS     0x234E 0x233B  // ⍬ / ⌻
#define UC_A_QD_CIRC_PLUS      0x233E 0x2342  // ⌾ / ⍢
#define UC_A_QD_UP_DN          0x2350 0x2357  // ⍐ / ⍗

// === CLUSTER 2: Z-SPEC & RELATIONS (12 Defines) ===
#define UC_Z_SPOT_PRIME        0x22C5 0x2032  // ⋅ / ′
#define UC_Z_DOM_RAN_RES       0x21B0 0x21B1  // ↰ / ↱
#define UC_Z_DOM_RAN_SUB       0x2A64 0x2A65  // ⩤ / ⩥
#define UC_Z_COMP_REL          0x2A3E 0x2194  // ⨾ / ↔
#define UC_Z_INJ_SURJ          0x21A3 0x21A0  // ↣ / ↠
#define UC_Z_BIJECT_PARTIAL    0x2916 0x21F8  // ⤖ / ⇸
#define UC_Z_BAG_MEMB_BRACK    0x22FF 0x2989  // ⋿ / ⦉
#define UC_Z_SEMANTIC_L_R      0x27E6 0x27E7  // ⟦ / ⟧
#define UC_Z_POWER_FINITE      0x2119 0x1D543 // ℙ / 𝔽
#define UC_Z_XI_THETA          0x039E 0x03B8  // Ξ / θ
#define UC_Z_SEQ_CONCAT        0x2040 0x21BE  // ⁀ / ↾
#define UC_Z_OVERRIDE_PIPE     0x2295 0x2223  // ⊕ / ∣ (Relational Override / Pipe)

// === CLUSTER 3: LOGIC & QUINE CORNERS (12 Defines) ===
#define UC_L_FORALL_EXISTS     0x2200 0x2203  // ∀ / ∃
#define UC_L_UNIQUE_NEXIST     0x2203 0x2204  // ∃! / ∄
#define UC_L_PROVE_ENTAIL      0x22A2 0x22A8  // ⊢ / ⊨
#define UC_L_NPROVE_NENTAIL    0x22AC 0x22AD  // ⊬ / ⊭
#define UC_L_QUINE_UPPER       0x231C 0x231D  // ⌜ / ⌝
#define UC_L_QUINE_LOWER       0x231E 0x231F  // ⌞ / ⌟
#define UC_L_NEC_POSS          0x25FB 0x25CA  // ◻ / ◊
#define UC_L_JOIN_MEET         0x2228 0x2227  // ∨ / ∧
#define UC_L_TOP_BOTTOM        0x22A4 0x22A5  // ⊤ / ⊥
#define UC_L_SHEFFER_NOR       0x2191 0x22BD  // ↑ / ⊽
#define UC_L_XOR_IFF           0x22BB 0x21D4  // ⊻ / ⇔
#define UC_L_NOT_REVERSE       0x00AC 0x223C  // ¬ / ∼ (Negation / Tilde-Reverse)

// === CLUSTER 4: CALCULUS & VECTOR (10 Defines) ===
#define UC_C_NABLA_LAPLACE     0x2207 0x2206  // ∇ / Δ
#define UC_C_PARTIAL_INF       0x2202 0x221E  // ∂ / ∞
#define UC_C_INT_OINT          0x222B 0x222E  // ∫ / ∮
#define UC_C_INT_DBL_CONT      0x222C 0x222F  // ∬ / ∯
#define UC_C_INT_TRP_VOL       0x222D 0x2230  // ∭ / ∰
#define UC_C_INT_QUAD_SHA      0x2A0C 0x0428  // ⨌ / Ш
#define UC_V_DOT_CROSS         0x22C5 0x2A2F  // ⋅ / ⨯
#define UC_C_SUM_PROD          0x2211 0x220F  // ∑ / ∏
#define UC_C_LIMIT_APPROX      0x2192 0x2245  // → / ≅
#define UC_C_WEIERSTRASS_PLANCK 0x2118 0x210F // ℘ / ℏ (P-set / H-bar)

// === CLUSTER 5: SIGNAL & TRIG (8 Defines) ===
#define UC_S_FOURIER_LAPLACE   0x2131 0x2112  // ℱ / ℒ
#define UC_S_ZTRANS_CONV       0x2126 0x2217  // ℨ / ∗
#define UC_S_PHASE_ARG         0x2220 0x03D5  // ∠ / ϕ
#define UC_S_PI_TAU            0x03C0 0x03C4  // π / τ
#define UC_S_DEGREE_RAD        0x00B0 0x33AD  // ° / ㎭
#define UC_S_PERP_PARALLEL     0x22A5 0x2225  // ⊥ / ∥
#define UC_S_ANGLE_MEAS        0x2221 0x212F  // ∡ / ℯ
#define UC_S_REAL_IMAG         0x211D 0x2111  // ℝ / ℑ

// === CLUSTER 6: SETS & CARDINALS (12 Defines) ===
#define UC_N_NAT_INT           0x2115 0x2124  // ℕ / ℤ
#define UC_N_RAT_REAL          0x211A 0x211D  // ℚ / ℝ
#define UC_N_COMP_BOOL         0x2102 0x1D539 // ℂ / 𝔹
#define UC_N_ALEPH_BETH        0x2135 0x2136  // ℵ / ℶ
#define UC_N_GIMEL_DALET       0x2137 0x2138  // ℷ / ℸ
#define UC_N_OMEGA_EPS         0x03C9 0x03B5  // ω / ε
#define UC_N_UNION_ISECT       0x222A 0x2229  // ∪ / ∩
#define UC_N_SUB_SUBEQ         0x2282 0x2286  // ⊂ / ⊆
#define UC_N_MEMB_NOT          0x2208 0x2209  // ∈ / ∉
#define UC_N_EMPTY_NULL        0x2205 0x2300  // ∅ / ⌀
#define UC_N_ALMOST_ASYMP      0x2248 0x223C  // ≈ / ∼
#define UC_N_SUP_INF           0x22EF 0x22EE  // ⋯ / ⋮ (Horizontal / Vertical Dots)

// === CLUSTER 7: ARITHMETIC (10 Defines) ===
#define UC_M_CONG_MOD          0x2261 0x0025  // ≡ / %
#define UC_M_NEQ_PROP          0x2260 0x221D  // ≠ / ∝
#define UC_M_MUCH_L_G          0x226A 0x226B  // ≪ / ≫
#define UC_M_DIV_NDIV          0x2223 0x2224  // ∣ / ∤
#define UC_M_CEIL_FLOOR        0x2308 0x230A  // ⌈ / ⌊
#define UC_M_LESS_GREATER_EQ   0x2264 0x2265  // ≤ / ≥
#define UC_M_PL_MIN_MIN_PL     0x00B1 0x2213  // ± / ∓
#define UC_M_SQUARE_ROOT       0x221A 0x221B  // √ / ∛
#define UC_M_PRIME_SET         0x2119 0x2119  // ℙ / ℙ (Primes / Primes)
#define UC_M_FACT_EXP          0x0021 0x005E  // ! / ^
