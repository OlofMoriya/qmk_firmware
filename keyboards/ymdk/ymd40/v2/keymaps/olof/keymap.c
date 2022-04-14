/* Copyright 2021 James Young (@noroadsleft)
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

#include QMK_KEYBOARD_H
#include "keymap_swedish.h"
//osx needs to be modified first as it difines the same keys as the swedish keymap.
#include "keymap_swedish_osx.h"

#define CS_TABFN LT(MO(4), KC_TAB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_4x12(
        KC_ESC,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,  KC_I,    KC_O,    KC_P,     SE_ARNG,
        CS_TABFN, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,  KC_K,    KC_L,    SE_ODIA,  SE_ADIA,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,  KC_COMM, KC_DOT,  SE_MINS,  KC_ENT ,
        KC_LCTL,  KC_LGUI, KC_LALT, KC_LCTL, MO(1),   KC_SPC,  KC_SPC,  MO(2), S(KC_COMM), S(KC_DOT), S(SE_MIN), KC_ENT
    ),
    [1] = LAYOUT_ortho_4x12(
        KC_F2  , _______, SE_QUO2, SE_HASH, SE_AT,   NO_TILD, SE_PERC, KC_7,    KC_8, KC_9,    SE_PLUS, SE_MINS,
        _______, _______, KC_BSLS, _______, SE_BSLS, NO_CIRC, SE_DLR,  KC_4,    KC_5, KC_6,    SE_QUES, SE_EXLM,
        _______, _______, KC_F12,  SE_AMPR, SE_SLSH, SE_PIPE, SE_EQL,  KC_1,    KC_2, KC_3,    SE_ASTR, SE_EQL,
        _______, _______, _______, _______, _______, KC_BSPC, KC_BSPC, MO(3), KC_0, _______, _______, _______
    ),
    [2] = LAYOUT_ortho_4x12(
        _______, KC_F10,  KC_F11, KC_F13,  _______, _______, _______, SE_LCBR, SE_RCBR, SE_LABK, SE_RABK,   _______,
        _______, KC_F7,   KC_F8,   KC_F9,  _______, _______, _______, SE_LBRC, SE_RBRC, KC_BSLS, S(KC_EQL), KC_EQL,
        _______, KC_F4,   KC_F5,   KC_F6,  _______, _______, _______, SE_LPRN, SE_RPRN, _______, _______,   _______,
        _______, KC_F1,   KC_F2,   KC_F3,  MO(3)  , KC_DEL,  KC_DEL, _______, _______, _______, _______,   _______
    ),
    [3] = LAYOUT_ortho_4x12(
        RESET,   RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______, _______, _______, _______, _______, DEBUG,
        _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______, _______, _______, _______, _______, _______,
        _______, BL_TOGG, BL_DEC,  BL_INC,  BL_BRTG, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, DF(0)  , DF(5)
    ),
    [4] = LAYOUT_ortho_4x12(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_LCTL, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [5] = LAYOUT_ortho_4x12(
        KC_ESC,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,  KC_I,    KC_O,    KC_P,     SEX_ARNG,
        CS_TABFN, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,  KC_K,    KC_L,    SEX_ODIA,  SEX_ADIA,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,  KC_COMM, KC_DOT,  SEX_MINS,  KC_ENT ,
        KC_LCTL,  KC_LGUI, KC_LALT, KC_LCTL, MO(6),   KC_SPC,  KC_SPC,  MO(7), S(KC_COMM), S(KC_DOT), S(SEX_MIN), KC_ENT
    ),
    [6] = LAYOUT_ortho_4x12(
        KC_F2  , _______, SEX_QUO2, SEX_HASH, SEX_AT,   NO_TILD, SEX_PERC, KC_7,    KC_8, KC_9,    SEX_PLUS, SEX_MINS,
        _______, _______, KC_BSLS, _______, SEX_BSLS, NO_CIRC, SEX_DLR,  KC_4,    KC_5, KC_6,    SEX_QUES, SEX_EXLM,
        _______, _______, KC_F12,  SEX_AMPR, SEX_SLSH, SEX_PIPE, SEX_EQL,  KC_1,    KC_2, KC_3,    SEX_ASTR, SEX_EQL,
        _______, _______, _______, _______, _______, KC_BSPC, KC_BSPC, MO(3), KC_0, _______, _______, _______
    ),
    [7] = LAYOUT_ortho_4x12(
        _______, KC_F10,  KC_F11, KC_F13,  _______, _______, _______, SEX_LCBR, SEX_RCBR, SEX_LABK, SEX_RABK,   _______,
        _______, KC_F7,   KC_F8,   KC_F9,  _______, _______, _______, SEX_LBRC, SEX_RBRC, KC_BSLS, S(KC_EQL), KC_EQL,
        _______, KC_F4,   KC_F5,   KC_F6,  _______, _______, _______, SEX_LPRN, SEX_RPRN, _______, _______,   _______,
        _______, KC_F1,   KC_F2,   KC_F3,  MO(3)  , KC_DEL,  KC_DEL , _______, _______, _______, _______,   _______
    )
};
