#include "org60.h"
#include "action_layer.h"

// Keyboard Layers
enum keyboard_layers {
  _BASE,        // Base Layer
  _FUNCTION,    // Function Layer
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = KEYMAP(
  /*
    0: Base Layer
    .--------------------------------------------------------------------------------------------------------------------------------------.
    | ~      | !      | @      | #      | $      | %      | ^      | &      | *      | (      | )      | _      | +      |                 |
    |        |        |        |        |        |        |        |        |        |        |        |        |        |                 |
    | Esc    | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 0      | -      | =      | Backspace       |
    |--------------------------------------------------------------------------------------------------------------------------------------|
    |            |        |        |        |        |        |        |        |        |        |        | {      | ]      | |           |
    |            |        |        |        |        |        |        |        |        |        |        |        |        |             |
    | Tab        | Q      | W      | E      | R      | T      | Y      | U      | I      | O      | P      | [      | ]      | \           |
    |--------------------------------------------------------------------------------------------------------------------------------------|
    |               |        |        |        |        |        |        |        |        |        | :      | "      |                   |
    |               |        |        |        |        |        |        |        |        |        |        |        |                   |
    | Caps Lock     | A      | S      | D      | F      | G      | H      | J      | K      | L      | ;      | '      | Enter             |
    |--------------------------------------------------------------------------------------------------------------------------------------|
    |                   |        |        |        |        |        |        |        | <      | >      | ?      |      |        |        |
    |                   |        |        |        |        |        |        |        |        |        |        |      |        |        |
    | Shift             | Z      | X      | C      | V      | B      | N      | M      | ,      | .      | /      |Shift | Up     | Del    |
    |--------------------------------------------------------------------------------------------------------------------------------------|
    |          |          |          |                                                        |          |      |        |        |        |
    |          |          |          |                                                        |          |      |        |        |        |
    | Ctrl     | Win      | Alt      | Space                                                  | Left     | Up   | Left   | Down   | Right  |
    '--------------------------------------------------------------------------------------------------------------------------------------'
  */

   //--------------------------------------------------------------------------------------------------------------------------------------.
   //        |        |        |        |        |        |        |        |        |        |        |        |        |                 |
   //        |        |        |        |        |        |        |        |        |        |        |        |        |                 |
     KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC,   
   //--------------------------------------------------------------------------------------------------------------------------------------|
   //            |        |        |        |        |        |        |        |        |        |        |        |        |             |
   //            |        |        |        |        |        |        |        |        |        |        |        |        |             |
     KC_TAB,      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,      
   //--------------------------------------------------------------------------------------------------------------------------------------|
   //               |        |        |        |        |        |        |        |        |        |        |        |                   |
   //               |        |        |        |        |        |        |        |        |        |        |        |                   |
     KC_LCTL,        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NO, KC_ENT,      
   //--------------------------------------------------------------------------------------------------------------------------------------|
   //                   |        |        |        |        |        |        |        |        |        |        |      |        |        |
   //                   |        |        |        |        |        |        |        |        |        |        |      |        |        |
     KC_LSFT, KC_NO,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,KC_RSFT, KC_UP,   KC_DEL,   
   //--------------------------------------------------------------------------------------------------------------------------------------|
   //          |          |          |                                                        |          |      |        |        |        |
   //          |          |          |                                                        |          |      |        |        |        |
     KC_CAPS,   F(0),      KC_LALT,   KC_SPC,                                              KC_PGUP,      KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT),
   //--------------------------------------------------------------------------------------------------------------------------------------'


  [_FUNCTION] = KEYMAP(
  /*
    1: Function Layer
    .--------------------------------------------------------------------------------------------------------------------------------------.
    |        |        |        |        |        |        |        |        |        |        |        |        |        |                 |
    |        |        |        |        |        |        |        |        |        |        |        |        |        |                 |
    | Esc    | F1     | F2     | F3     | F4     | F5     | F6     | F7     | F8     | F9     | F10    | F11    | F12    | Delete          |
    |--------------------------------------------------------------------------------------------------------------------------------------|
    |            |        |        |        |        |        |        |        |        |        |        |        |        |             |
    |            |        |        |        | RGB    | RGB    | RGB    | RGB    | Print  |        |        |        |        |             |
    | Tab        | 7      | 8      | 9      | Toggle | Mode   | Pwr+   | Pwr-   | Screen | Insert | Pause  | Home   | End    | Reset       |
    |--------------------------------------------------------------------------------------------------------------------------------------|
    |               |        |        |        |        |        |        |        |        |        |        |        |                   |
    |               |        |        |        | RGB    | RGB    | RGB    | RGB    |        |        | Page   | Page   |                   |
    | Caps Lock     | 4      | 5      | 6      | Hue+   | Hue-   | Sat+   | Sat-   |        |        | Up     | Down   | Enter             |
    |--------------------------------------------------------------------------------------------------------------------------------------|
    |                   |        |        |        |        |        |        |        |        |        |        |░░░░░░|        |░░░░░░░░|
    |                   |        |        |        |        | Back   | Back   |        |        |        |        |░░░░░░|        |░░░░░░░░|
    | Shift             | 1      | 2      | 3      |        | Light+ | Light- |        |        | Left   | Right  |░░░░░░| Shift  |░░░░░░░░|
    |--------------------------------------------------------------------------------------------------------------------------------------|
    |          |          |          |                                                        |          |      |        |        |        |
    |          |          |          |                                                        |          |      |        |        |        |
    | Ctrl     | Fn0      | Alt      | 0                                                      | Win      |Mute  |        | Vol Dn | Vol Up |
    '--------------------------------------------------------------------------------------------------------------------------------------'
  */

   //--------------------------------------------------------------------------------------------------------------------------------------.
   //        |        |        |        |        |        |        |        |        |        |        |        |        |                 |
   //        |        |        |        |        |        |        |        |        |        |        |        |        |                 |
     KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_NO,   
   //--------------------------------------------------------------------------------------------------------------------------------------|
   //            |        |        |        |        |        |        |        |        |        |        |        |        |             |
   //            |        |        |        |        |        |        |        |        |        |        |        |        |             |
     KC_TAB,       KC_7,    KC_8,    KC_9,    RGB_TOG, RGB_MOD, RGB_VAI, RGB_VAD, KC_PSCR, KC_INS,  KC_PAUS, KC_HOME, KC_END,  RESET,      
   //--------------------------------------------------------------------------------------------------------------------------------------|
   //               |        |        |        |        |        |        |        |        |        |        |        |                   |
   //               |        |        |        |        |        |        |        |        |        |        |        |                   |
     KC_CAPS,        KC_4,    KC_5,    KC_6,    RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, KC_NO,   KC_NO,   KC_PGUP, KC_PGDN, KC_NO, KC_ENT,      
   //--------------------------------------------------------------------------------------------------------------------------------------|
   //                   |        |        |        |        |        |        |        |        |        |        |░░░░░░|        |░░░░░░░░|
   //                   |        |        |        |        |        |        |        |        |        |        |░░░░░░|        |░░░░░░░░|
     KC_LSFT, KC_NO,     KC_1,    KC_2,    KC_3,    KC_NO,   BL_INC,  BL_DEC,  KC_NO,   KC_NO,   KC_LEFT, KC_RIGHT, KC_NO, KC_RSFT, KC_NO,   
   //--------------------------------------------------------------------------------------------------------------------------------------|
   //          |          |          |                                                        |          |      |        |        |        |
   //          |          |          |                                                        |          |      |        |        |        |
     KC_LCTL,   F(0),      KC_LALT,   KC_0,                                                    KC_PGUP,  KC_PGDN,  KC_MUTE, KC_VOLD, KC_VOLU),
   //--------------------------------------------------------------------------------------------------------------------------------------'

};


// Custom Actions
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(_FUNCTION),  // to Function overlay
};


// Loop
void matrix_scan_user(void) {
  // Empty
};
