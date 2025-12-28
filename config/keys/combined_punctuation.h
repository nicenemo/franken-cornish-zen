/* combined_punctuation.h */

// Whitespace & Quads (Comments: Descriptive Names)
#define UC_COMB_PUN_EN_EM_QUAD                             0x2000 0x2001  // EN QUAD / EM QUAD
#define UC_COMB_PUN_EN_EM_SPACE                            0x2002 0x2003  // EN SPACE / EM SPACE
#define UC_COMB_PUN_THREE_FOUR_PER_EM_SPACE                0x2004 0x2005  // 3-PER-EM SPACE / 4-PER-EM SPACE
#define UC_COMB_PUN_SIX_PER_EM_FIGURE_SPACE                0x2006 0x2007  // 6-PER-EM SPACE / FIGURE SPACE
#define UC_COMB_PUN_PUNCTUATION_THIN_SPACE                 0x2008 0x2009  // PUNCTUATION SPACE / THIN SPACE
#define UC_COMB_PUN_HAIR_SPACE_ZWSP                        0x200A 0x200B  // HAIR SPACE / ZERO WIDTH SPACE
#define UC_COMB_PUN_NNBSP_MMS                              0x202F 0x205F  // NARROW NO-BREAK SPACE / MEDIUM MATH SPACE

// Dashes & Lines (Comments: Glyphs)
#define UC_COMB_HYPHEN_NON_BREAKING_HYPHEN                 0x2010 0x2011  // ‐ / ‑
#define UC_COMB_FIGURE_DASH_EN_DASH                        0x2012 0x2013  // ‒ / –
#define UC_COMB_EM_DASH_HORIZONTAL_BAR                     0x2014 0x2015  // — / ―
#define UC_COMB_DOUBLE_VERTICAL_LINE_LOW_LINE              0x2016 0x2017  // ‖ / ‗
#define UC_COMB_OVERLINE_UNDERTIE                          0x203E 0x203F  // ‾ / ‿
#define UC_COMB_CHARACTER_TIE_CARET_INSERTION              0x2040 0x2041  // ⁀ / ⁁

// Quotes & Guillemets (Comments: Glyphs)
#define UC_COMB_SINGLE_QUOTATION_MARKS                     0x2018 0x2019  // ‘ / ’
#define UC_COMB_SINGLE_LOW_HIGH_REV_QUOTES                 0x201A 0x201B  // ‚ / ‛
#define UC_COMB_DOUBLE_QUOTATION_MARKS                     0x201C 0x201D  // “ / ”
#define UC_COMB_DOUBLE_LOW_HIGH_REV_QUOTES                 0x201E 0x201F  // „ / ‟
#define UC_COMB_SINGLE_GUILLEMETS                          0x2039 0x203A  // ‹ / ›

// Math & Primes (Comments: Glyphs)
#define UC_COMB_DAGGER_DOUBLE_DAGGER                       0x2020 0x2021  // † / ‡
#define UC_COMB_BULLET_TRIANGULAR_BULLET                   0x2022 0x2023  // • / ‣
#define UC_COMB_PRIME_DOUBLE_PRIME                         0x2032 0x2033  // ′ / ″
#define UC_COMB_TRIPLE_REVERSED_PRIME                      0x2034 0x2035  // ‴ / ‵
#define UC_COMB_REVERSED_DOUBLE_TRIPLE_PRIME               0x2036 0x2037  // ‶ / ‷
#define UC_COMB_PER_MILLE_TEN_THOUSAND                     0x2030 0x2031  // ‰ / ‱
#define UC_COMB_ONE_TWO_DOT_LEADER                         0x2024 0x2025  // ․ / ‥
#define UC_COMB_HORIZONTAL_ELLIPSIS_HYPHEN_POINT           0x2026 0x2027  // … / ‧

// Specialty Punctuation (Comments: Glyphs)
#define UC_COMB_DOUBLE_EXCLAMATION_INTERROBANG             0x203C 0x203D  // ‼ / ‽
#define UC_COMB_ASTERISM_HYPHEN_BULLET                     0x2042 0x2043  // ⁂ / ⁃
#define UC_COMB_QUESTION_EXCLAM_EXCLAM_QUESTION            0x2048 0x2049  // ⁈ / ⁉
#define UC_COMB_BLACK_LEFT_RIGHT_BULLET                    0x204C 0x204D  // ⁌ / ⁍

// Directional Control (Comments: Descriptive Names)
#define UC_COMB_PUN_ZW_NON_JOINER_JOINER                   0x200C 0x200D  // ZWNJ / ZWJ
#define UC_COMB_PUN_LTR_RTL_MARK                           0x200E 0x200F  // LRM / RLM
#define UC_COMB_PUN_LTR_RTL_EMBEDDING                      0x202A 0x202B  // LRE / RLE
#define UC_COMB_PUN_PDF_LTR_OVERRIDE                       0x202C 0x202D  // PDF / LRO
#define UC_COMB_PUN_RLO_PDI                                0x202E 0x2069  // RLO / POP DIRECTIONAL ISOLATE
#define UC_COMB_PUN_LTR_RTL_ISOLATE                        0x2066 0x2067  // LRI / RLI
#define UC_COMB_PUN_FSI_LINE_PARA_SEP                      0x2068 0x2028  // FSI / LINE SEP (Shifted PARA SEP 0x2029)

// Invisible Operators (Comments: Descriptive Names)
#define UC_COMB_PUN_WORD_JOINER_FUNC_APPL                  0x2060 0x2061  // WORD JOINER / FUNC APPL
#define UC_COMB_PUN_INV_TIMES_SEP                          0x2062 0x2063  // INV TIMES / INV SEP
#define UC_COMB_PUN_INV_PLUS_CARET                         0x2064 0x2038  // INV PLUS / CARET (0x2038)

// Digit Shaping & Swapping (Comments: Descriptive Names)
#define UC_COMB_PUN_ISS_ASS                                0x206A 0x206B  // INHIBIT SYM SWAP / ACTIVATE SYM SWAP
#define UC_COMB_PUN_IAFS_AAFS                              0x206C 0x206D  // INHIBIT ARABIC SHAPING / ACTIVATE ARABIC SHAPING
#define UC_COMB_PUN_NADS_NODS                              0x206E 0x206F  // NATIONAL DIGITS / NOMINAL DIGITS

// Obscure Technical (Comments: Glyphs)
#define UC_COMB_FRACTION_SLASH_REF_MARK                    0x2044 0x203B  // ⁄ / ※
#define UC_COMB_LEFT_RIGHT_SQUARE_QUILL                    0x2045 0x2046  // ⁅ / ⁆
#define UC_COMB_DOUBLE_QUES_TIRONIAN_ET                    0x2047 0x204A  // ⁇ / ⁊
#define UC_COMB_REV_PILCROW_REV_SEMICOLON                  0x204B 0x204F  // ⁋ / ⁏
#define UC_COMB_LOW_AST_CLOSE_UP                           0x204E 0x2050  // ⁎ / ⁐
#define UC_COMB_TWO_DOT_ONE_DOT_COMM_MINUS                 0x2051 0x2052  // ⁑ / ⁒
#define UC_COMB_SWUNG_DASH_INV_UNDERTIE                    0x2053 0x2054  // ⁓ / ⁔
#define UC_COMB_FLOWER_PUNC_THREE_DOT_PUNC                 0x2055 0x2056  // ⁕ / ⁖
#define UC_COMB_QUAD_PRIME_FOUR_DOT_PUNC                   0x2057 0x2058  // ⁗ / ⁘
#define UC_COMB_FIVE_DOT_TWO_DOT_PUNC                      0x2059 0x205A  // ⁙ / ⁚
#define UC_COMB_FOUR_DOT_MARK_DOTTED_CROSS                 0x205B 0x205C  // ⁛ / ⁜
#define UC_COMB_TRICOLON_VERT_FOUR_DOTS                    0x205D 0x205E  // ⁝ / ⁞
