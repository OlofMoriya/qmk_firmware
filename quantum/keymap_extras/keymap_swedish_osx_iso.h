/* Copyright 2021
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "keymap.h"

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ § │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ + │ ´ │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ Å │ ¨ │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ ' │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define SEX_SECT KC_GRV  // §
#define SEX_1    KC_1    // 1
#define SEX_2    KC_2    // 2
#define SEX_3    KC_3    // 3
#define SEX_4    KC_4    // 4
#define SEX_5    KC_5    // 5
#define SEX_6    KC_6    // 6
#define SEX_7    KC_7    // 7
#define SEX_8    KC_8    // 8
#define SEX_9    KC_9    // 9
#define SEX_0    KC_0    // 0
#define SEX_PLUS KC_MINS // +
#define SEX_ACUT KC_EQL  // ´ (dead)
// Row 2
#define SEX_Q    KC_Q    // Q
#define SEX_W    KC_W    // W
#define SEX_E    KC_E    // E
#define SEX_R    KC_R    // R
#define SEX_T    KC_T    // T
#define SEX_Y    KC_Y    // Y
#define SEX_U    KC_U    // U
#define SEX_I    KC_I    // I
#define SEX_O    KC_O    // O
#define SEX_P    KC_P    // P
#define SEX_ARNG KC_LBRC // Å
#define SEX_DIAE KC_RBRC // ¨ (dead)
// Row 3
#define SEX_A    KC_A    // A
#define SEX_S    KC_S    // S
#define SEX_D    KC_D    // D
#define SEX_F    KC_F    // F
#define SEX_G    KC_G    // G
#define SEX_H    KC_H    // H
#define SEX_J    KC_J    // J
#define SEX_K    KC_K    // K
#define SEX_L    KC_L    // L
#define SEX_ODIA KC_SCLN // Ö
#define SEX_ADIA KC_QUOT // Ä
#define SEX_QUOT KC_NUHS // '
// Row 4
#define SEX_LABK KC_GRV // <
#define SEX_Z    KC_Z    // Z
#define SEX_X    KC_X    // X
#define SEX_C    KC_C    // C
#define SEX_V    KC_V    // V
#define SEX_B    KC_B    // B
#define SEX_N    KC_N    // N
#define SEX_M    KC_M    // M
#define SEX_COMM KC_COMM // ,
#define SEX_DOT  KC_DOT  // .
#define SEX_MINS KC_SLSH // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ° │ ! │ " │ # │ € │ % │ & │ / │ ( │ ) │ = │ ? │ ` │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ^ │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ * │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define SEX_DEG S(SEX_SECT)  // °
#define SEX_EXLM S(SEX_1)    // !
#define SEX_DQUO S(SEX_2)    // "
#define SEX_HASH S(SEX_3)    // #
#define SEX_EURO S(SEX_4)    // €
#define SEX_PERC S(SEX_5)    // %
#define SEX_AMPR S(SEX_6)    // &
#define SEX_SLSH S(SEX_7)    // /
#define SEX_LPRN S(SEX_8)    // (
#define SEX_RPRN S(SEX_9)    // )
#define SEX_EQL  S(SEX_0)    // =
#define SEX_QUES S(SEX_PLUS) // ?
#define SEX_GRV  S(SEX_ACUT) // `
// Row 2
#define SEX_CIRC S(SEX_DIAE) // ^ (dead)
// Row 3
#define SEX_ASTR S(SEX_QUOT) // *
// Row 4
#define SEX_RABK S(SEX_LABK) // >
#define SEX_SCLN S(SEX_COMM) // ;
#define SEX_COLN S(SEX_DOT)  // :
#define SEX_UNDS S(SEX_MINS) // _

/* Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ¶ │ © │ ™ │ £ │ $ │ ∞ │   │ | │ [ │ ] │ ≈ │ ± │   │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ • │ Ω │ É │ ® │ † │ µ │ Ü │ ı │ Œ │ π │ ˙ │ ~ │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │  │ ß │ ∂ │ ƒ │ ¸ │ ˛ │ √ │ ª │ ﬁ │ Ø │ Æ │ @ │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≤ │ ÷ │   │ Ç │ ‹ │ › │ ‘ │ ’ │ ‚ │ … │ – │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1 
#define SEX_PILC A(SEX_SECT) // ¶
#define SEX_COPY A(SEX_1)    // ©
#define SEX_TM   A(SEX_2)    // ™
#define SEX_PND  A(SEX_3)    // £
#define SEX_DLR  A(SEX_4)    // $
#define SEX_INFN A(SEX_5)    // ∞
#define SEX_PIPE A(SEX_7)    // |
#define SEX_LBRC A(SEX_8)    // [
#define SEX_RBRC A(SEX_9)    // ]
#define SEX_AEQL A(SEX_0)    // ≈
#define SEX_PLMN A(SEX_PLUS) // ±
// Row 2
#define SEX_BULT A(SEX_Q)    // •
#define SEX_OMEG A(SEX_W)    // Ω
#define SEX_EACU A(SEX_E)    // É
#define SEX_REGD A(SEX_R)    // ®
#define SEX_DAGG A(SEX_T)    // †
#define SEX_MICR A(SEX_Y)    // µ
#define SEX_UDIA A(SEX_U)    // Ü
#define SEX_DLSI A(SEX_I)    // ı
#define SEX_OE   A(SEX_O)    // Œ
#define SEX_PI   A(SEX_P)    // π
#define SEX_DOTA A(SEX_ARNG) // ˙
#define SEX_TILD A(SEX_DIAE) // ~ (dead)
// Row 3
#define SEX_APPL A(SEX_A)    //  (Apple logo)
#define SEX_SS   A(SEX_S)    // ß
#define SEX_PDIF A(SEX_D)    // ∂
#define SEX_FHK  A(SEX_F)    // ƒ
#define SEX_CEDL A(SEX_G)    // ¸
#define SEX_OGON A(SEX_H)    // ˛
#define SEX_SQRT A(SEX_J)    // √
#define SEX_FORD A(SEX_K)    // ª
#define SEX_FI   A(SEX_L)    // ﬁ
#define SEX_OSTR A(SEX_ODIA) // Ø
#define SEX_AE   A(SEX_ADIA) // Æ
#define SEX_AT   A(KC_2) // @
// Row 4
#define SEX_LTEQ A(SEX_LABK) // ≤
#define SEX_DIV  A(SEX_Z)    // ÷
#define SEX_CCED A(SEX_C)    // Ç
#define SEX_LSAQ A(SEX_V)    // ‹
#define SEX_RSAQ A(SEX_B)    // ›
#define SEX_LSQU A(SEX_N)    // ‘
#define SEX_RSQU A(SEX_M)    // ’
#define SEX_SLQU A(SEX_COMM) // ‚
#define SEX_ELLP A(SEX_DOT)  // …
#define SEX_NDSH A(SEX_MINS) // –

/* Shift+Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │   │ ¡ │ ” │ ¥ │ ¢ │ ‰ │   │ \ │ { │ } │ ≠ │ ¿ │   │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │   │ ˝ │   │   │ ‡ │ ˜ │   │ ˆ │   │ ∏ │ ˚ │   │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ ◊ │ ∑ │ ∆ │ ∫ │ ¯ │ ˘ │ ¬ │ º │ ﬂ │   │   │   │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≥ │ ⁄ │ ˇ │   │ « │ » │ “ │ ” │ „ │ · │ — │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define SEX_IEXL S(A(SEX_1))    // ¡
#define SEX_YEN  S(A(SEX_3))    // ¥
#define SEX_CENT S(A(SEX_4))    // ¢
#define SEX_PERM S(A(SEX_5))    // ‰
#define SEX_BSLS S(A(SEX_7))    // (backslash)
#define SEX_LCBR S(A(SEX_8))    // {
#define SEX_RCBR S(A(SEX_9))    // }
#define SEX_NEQL S(A(SEX_0))    // ≠
#define SEX_IQUE S(A(SEX_PLUS)) // ¿
// Row 2
#define SEX_DACU S(A(SEX_W))    // ˝
#define SEX_DDAG S(A(SEX_T))    // ‡
#define SEX_STIL S(A(SEX_Y))    // ˜
#define SEX_DCIR S(A(SEX_I))    // ˆ
#define SEX_NARP S(A(SEX_P))    // ∏
#define SEX_RNGA S(A(SEX_ARNG)) // ˚
// Row 3
#define SEX_LOZN S(A(SEX_A))    // ◊
#define SEX_NARS S(A(SEX_S))    // ∑
#define SEX_INCR S(A(SEX_D))    // ∆
#define SEX_INTG S(A(SEX_F))    // ∫
#define SEX_MACR S(A(SEX_G))    // ¯
#define SEX_BREV S(A(SEX_H))    // ˘
#define SEX_NOT  S(A(SEX_J))    // ¬
#define SEX_MORD S(A(SEX_K))    // º
#define SEX_FL   S(A(SEX_L))    // ﬂ
// Row 4
#define SEX_GTEQ S(A(SEX_LABK)) // ≥
#define SEX_FRSL S(A(SEX_Z))    // ⁄
#define SEX_CARN S(A(SEX_X))    // ˇ
#define SEX_LDAQ S(A(SEX_V))    // «
#define SEX_RDAQ S(A(SEX_B))    // »
#define SEX_LDQU S(A(SEX_N))    // “
#define SEX_RDQU S(A(SEX_M))    // ”
#define SEX_DLQU S(A(SEX_COMM)) // „
#define SEX_MDDT S(A(SEX_DOT))  // ·
#define SEX_MDSH S(A(SEX_MINS)) // —
