#include QMK_KEYBOARD_H
#include <stdio.h>
#include <string.h>



enum layer_number {
    _BASE = 0,
    _SYM1,
    _SYM2,
    _NUM,
    _FUN,
    _NAV,
    _GAM,
    _MOU
};

enum tap_dance {
    VCAP
};

combo_t key_combos[] = {
};

tap_dance_action_t tap_dance_actions[] = {
    [VCAP] = ACTION_TAP_DANCE_DOUBLE(KC_V, KC_CAPS),
};

#define LT_NAV LT(_NAV, KC_TAB)
#define LT_NUM LT(_NUM, KC_ESC)
#define LT_FUN LT(_FUN, KC_BSPC)
#define LT_SYM1 LT(_SYM1, KC_P)
#define LT_SYM2 LT(_SYM2, KC_F)

#define LT_MOU LT(_MOU, KC_G)

// LEFT HAND HOME ROW MODS ├───────────────────────────────────┐

#define GUI_C MT(MOD_LGUI, KC_C)
#define ALT_I MT(MOD_LALT, KC_I)
#define CTL_E MT(MOD_LCTL, KC_E)
#define SHT_A MT(MOD_LSFT, KC_A)

// RIGHT HAND HOME ROW MODS ├───────────────────────────────────┐

#define SHT_H MT(MOD_RSFT, KC_H)
#undef CTL_T
#define CTL_T MT(MOD_LCTL, KC_T)
#define ALT_S MT(MOD_LALT, KC_S)
#define GUI_N MT(MOD_LGUI, KC_N)

// ┌────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
// │ K E Y M A P S                                                                                                                              │
// └────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
// ▝▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▘

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


  [_BASE] = LAYOUT(
  KC_B,       KC_Y,       KC_O,       KC_U,       KC_Z,        KC_Q,       KC_L,       KC_D,       KC_W,       TD(VCAP),
  GUI_C,      ALT_I,      CTL_E,      SHT_A,      KC_COMM,     KC_DOT,     SHT_H,      CTL_T,      ALT_S,      GUI_N,
  LT_MOU,     KC_X,       KC_J,       KC_K,       KC_SCLN,     KC_SLSH,    KC_R,       KC_M,       LT_SYM2,    LT_SYM1,
                          LT_FUN,     LT_NAV,     LT_NUM,      KC_ENT,     KC_SPC,     KC_QUOT
 ),

  [_SYM1] = LAYOUT(
  S(KC_5),    S(KC_3),    S(KC_8),    S(KC_SLSH), KC_GRV,      XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
  S(KC_6),    KC_EQL,     S(KC_MINS), S(KC_4),    KC_QUOT,     XXXXXXX,    KC_RSFT,    KC_RCTL,    KC_RALT,    KC_RGUI,
  S(KC_COMM), S(KC_BSLS), KC_MINS,    S(KC_DOT),  S(KC_QUOT),  XXXXXXX,    SH_TOGG,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                          S(KC_EQL),  S(KC_SCLN), KC_BSLS,     XXXXXXX,    XXXXXXX,    XXXXXXX
),

  [_SYM2] = LAYOUT(
  S(KC_LBRC), S(KC_9),    S(KC_0),    S(KC_RBRC), S(KC_7),     XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
  S(KC_2),    KC_TILD,    KC_SLSH,    KC_DOT,     S(KC_3),     XXXXXXX,    KC_RSFT,    KC_RCTL,    KC_RALT,    KC_RGUI,
  KC_LBRC,    S(KC_9),    S(KC_0),    KC_RBRC,    S(KC_1),     XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                          KC_COMM,    KC_SCLN,    KC_BSLS,     XXXXXXX,    XXXXXXX,    XXXXXXX
),

  [_NUM] = LAYOUT(
  XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,     KC_EQL,     KC_7,       KC_8,       KC_9,       XXXXXXX,
  KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LSFT,    XXXXXXX,     KC_MINS,    KC_4,       KC_5,       KC_6,       S(KC_EQL),
  XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,     KC_SLSH,    KC_1,       KC_2,       KC_3,       S(KC_8),
                          XXXXXXX,    XXXXXXX,    XXXXXXX,     KC_COMM,    KC_0,       KC_DOT
  ),

  [_FUN] = LAYOUT(
  XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,     XXXXXXX,    KC_F7,      KC_F8,      KC_F9,      KC_F10,
  KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LSFT,    XXXXXXX,     XXXXXXX,    KC_F4,      KC_F5,      KC_F6,      KC_F11,
  XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,     XXXXXXX,    KC_F1,      KC_F2,      KC_F3,      KC_F12,
                          XXXXXXX,    XXXXXXX,    XXXXXXX,     XXXXXXX,    XXXXXXX,    DF(_GAM)
  ),

  [_NAV] = LAYOUT(
  DF(_NAV),   XXXXXXX,    XXXXXXX,    DF(_BASE),  XXXXXXX,     KC_TILD,    XXXXXXX,    KC_UP,      XXXXXXX,    XXXXXXX,
  KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LSFT,    XXXXXXX,     KC_SLSH,    KC_LEFT,    KC_DOWN,    KC_RGHT,    XXXXXXX,
  KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    XXXXXXX,     KC_DOT,     KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,
                          XXXXXXX,    XXXXXXX,    XXXXXXX,     KC_ENT,     XXXXXXX,    RM_TOGG
  ),

   [_GAM] = LAYOUT(
   KC_1,       KC_2,       KC_3,       KC_4,       KC_B,         KC_M,       KC_N,       KC_V,       KC_C,       KC_X,
   KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,         KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,
   KC_A,       KC_S,       KC_D,       KC_F,       KC_G,         KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,
                           KC_LALT,    KC_SPC,     KC_P,         XXXXXXX,    XXXXXXX,    DF(_BASE)
 ),

   [_MOU] = LAYOUT(
   XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,      XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_DEL,
   XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,      XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
   XXXXXXX,    XXXXXXX,    XXXXXXX,    SH_TOGG,    XXXXXXX,      XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                           XXXXXXX,    XXXXXXX,    XXXXXXX,      MS_BTN1,    MS_BTN3,    MS_BTN2
 ),
};

#ifdef CHORDAL_HOLD
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT(
       'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R',
       'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R',
       'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R',
                 'L', 'L', 'L', 'R', 'R', 'R'
    );
#endif

#ifdef SWAP_HANDS_ENABLE
const keypos_t PROGMEM hand_swap_config[MATRIX_ROWS][MATRIX_COLS] =
    {  // LEFT
        { {0, 4}, {1, 4}, {2, 4}, {3, 4}, {4, 4} },
        { {0, 5}, {1, 5}, {2, 5}, {3, 5}, {4, 5} },
        { {0, 6}, {1, 6}, {2, 6}, {3, 6}, {4, 6} },
        { {0, 7}, {1, 7}, {2, 7}, {3, 7}, {4, 7} },
        // RIGHT
        { {0, 0}, {1, 0}, {2, 0}, {3, 0}, {4, 0} },
        { {0, 1}, {1, 1}, {2, 1}, {3, 1}, {4, 1} },
        { {0, 2}, {1, 2}, {2, 2}, {3, 2}, {4, 2} },
        { {0, 3}, {1, 3}, {2, 3}, {3, 3}, {4, 3} },
    };
#endif
