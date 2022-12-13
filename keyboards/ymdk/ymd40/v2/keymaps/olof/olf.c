
#include QMK_KEYBOARD_H
#include "keymap_swedish.h"
//osx needs to be modified first as it difines the same keys as the swedish keymap.
#include "keymap_swedish_osx_iso.h"

#define CS_TABFN LT(_FUNCTION, KC_TAB)


enum custom_keycodes {
    MORNING = SAFE_RANGE,
    GARN,
};

/*SEND_STRING("("SS_TAP(UC(0x256F))SS_TAP(UC(0xB0))SS_TAP(UC(0x25A1))SS_TAP(UC(0xB0))")"SS_TAP(UC(0x256F))SS_TAP(UC(0xFE35))SS_TAP(UC(0x253B))SS_TAP(UC(0x2501))SS_TAP(UC(0x253B)));*/
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
	    case MORNING:
		    if (record->event.pressed) {
			    SEND_STRING("Morning");
		    } 
		    break;
	    case GARN:
		    if (record->event.pressed) {
			    SEND_STRING("garn start");
		    } 
		    break;
    }
    return true;
};

enum layers {
    _QWERTY,
    _LOWER,
    _RAISE,
    _XQWERTY,
    _XLOWER,
    _XRAISE,
    _ADJUST,
    _FUNCTION
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_ortho_4x12(
        KC_ESC,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,  KC_I,    KC_O,    KC_P,     SE_ARNG,
        CS_TABFN, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,  KC_K,    KC_L,    SE_ODIA,  SE_ADIA,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,  KC_COMM, KC_DOT,  SE_MINS,  KC_ENT ,
        KC_LCTL,  KC_LGUI, KC_LALT, KC_LALT, MO(1),   KC_SPC,  KC_SPC,  MO(2), S(KC_COMM), S(KC_DOT), KC_DOWN, KC_UP
    ),
/* Lower
 * ,-----------------------------------------------------------------------------------.
 * | F2   |      |   "  |   #  |   @  |   ~  |   %  |   7  |   8  |   9  |   +  |   -  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | F12  |      |   '  |   *  |   \  |   ^  |   $  |   4  |   5  |   6  |   ?  |   !  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |  F12 |   &  |   /  |   |  |   $  |   1  |   2  |   3  |   *  |  =   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |MORNIN| GARN |      |      |      | Bksp | Bksp |Adjus |   0  |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
    [_LOWER] = LAYOUT_ortho_4x12(
        KC_F2  , _______, SE_DQUO, SE_HASH, SE_AT,   NO_TILD, SE_PERC, KC_7,    KC_8, KC_9,    SE_PLUS, SE_MINS,
        KC_F12 , _______, KC_BSLS, SE_ASTR, SE_BSLS, NO_CIRC, SE_DLR,  KC_4,    KC_5, KC_6,    SE_QUES, SE_EXLM,
        _______, _______, KC_F12,  SE_AMPR, SE_SLSH, SE_PIPE, SE_EQL,  KC_1,    KC_2, KC_3,    SE_ASTR, SE_EQL,
        MORNING, GARN   , _______, _______, _______, KC_BSPC, KC_BSPC, MO(_ADJUST), KC_0, _______, _______, _______
    ),
/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |      |  F10 |  F11 |  F12 |      |      |      |   {  |   }  |   <  |   >  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |      |      |      |   [  |   ]  |   '  |   `  |   ´  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F4  |  F5  |  F6  |      |      |      |   (  |   )  |   .  |   -  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F1  |  F2  |  F3  |Adjus | del  | del  |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
    [_RAISE] = LAYOUT_ortho_4x12(
        _______, KC_F10,  KC_F11, KC_F13,  _______, _______, _______, SE_LCBR, SE_RCBR, SE_LABK, SE_RABK,   _______,
        _______, KC_F7,   KC_F8,   KC_F9,  _______, _______, _______, SE_LBRC, SE_RBRC, KC_BSLS, S(KC_EQL), KC_EQL,
        _______, KC_F4,   KC_F5,   KC_F6,  _______, _______, _______, SE_LPRN, SE_RPRN, _______, _______,   _______,
        _______, KC_F1,   KC_F2,   KC_F3,MO(_ADJUST), KC_DEL,  KC_DEL, _______, _______, _______, _______, _______
    ),
    [_XQWERTY] = LAYOUT_ortho_4x12(
        KC_ESC,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,  KC_I,    KC_O,    KC_P,     SEX_ARNG,
        CS_TABFN, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,  KC_K,    KC_L,    SEX_ODIA,  SEX_ADIA,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,  KC_COMM, KC_DOT,  SEX_MINS,  KC_ENT ,
        KC_LCTL,  KC_LGUI, KC_LALT, KC_LALT, MO(_XLOWER),   KC_SPC,  KC_SPC,  MO(_XRAISE), S(KC_COMM), S(KC_DOT), KC_DOWN, KC_UP
    ),
    [_XLOWER] = LAYOUT_ortho_4x12(
        KC_F2  , _______, SE_DQUO, SEX_HASH, SEX_AT,   NO_TILD, SEX_PERC, KC_7,      KC_8, KC_9,    SEX_PLUS, SEX_MINS,
        KC_F12 , _______, KC_BSLS, SEX_ASTR, SEX_BSLS, NO_CIRC, SEX_DLR,  KC_4,      KC_5, KC_6,    SEX_QUES, SEX_EXLM,
        _______, _______, KC_F12,  SEX_AMPR, SEX_SLSH, SEX_PIPE, SEX_EQL, KC_1,      KC_2, KC_3,    SEX_ASTR, SEX_EQL,
        _______, _______, _______, _______, _______, KC_BSPC, KC_BSPC,  MO(_ADJUST), KC_0, _______, _______, _______
    ),
    [_XRAISE] = LAYOUT_ortho_4x12(
        _______, KC_F10,  KC_F11, KC_F13,  _______, _______, _______, SEX_LCBR, SEX_RCBR, SEX_LABK, SEX_RABK,   _______,
        _______, KC_F7,   KC_F8,   KC_F9,  _______, _______, _______, SEX_LBRC, SEX_RBRC, KC_BSLS, S(KC_EQL), KC_EQL,
        _______, KC_F4,   KC_F5,   KC_F6,  _______, _______, _______, SEX_LPRN, SEX_RPRN, _______, _______,   _______,
        _______, KC_F1,   KC_F2,   KC_F3,  MO(_ADJUST)  , KC_DEL,  KC_DEL , _______, _______, _______, _______,   _______
    ),
    [_ADJUST] = LAYOUT_ortho_4x12(
        RESET,   RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______, _______, _______, _______, _______, DEBUG,
        _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______, _______, _______, _______, _______, _______,
        _______, BL_TOGG, BL_DEC,  BL_INC,  BL_BRTG, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, DF(_QWERTY)  , DF(_XQWERTY)
    ),
    [_FUNCTION] = LAYOUT_ortho_4x12(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_ENT, _______,
        _______, _______, _______, _______, _______, _______, KC_MS_LEFT, KC_MS_DOWN, KC_MS_UP, KC_MS_RIGHT, KC_MS_BTN1, KC_MS_BTN2,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_2
    )
};

   
