#pragma once

#define MASTER_LEFT

#define VIAL_KEYBOARD_UID {0xBA, 0x38, 0x22, 0x3F, 0x8C, 0x42, 0x0F, 0x44}

/* VIAL secure unlock keystroke - currently both big keys (typ. SPACE/ENTER) */
/*#define VIAL_UNLOCK_COMBO_ROWS {4, 9}*/
/*#define VIAL_UNLOCK_COMBO_COLS {4, 4}*/

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

#ifndef ONESHOT_TAP_TOGGLE
#define ONESHOT_TAP_TOGGLE 2  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 5000  /* Time (in ms) before the one shot key is released */
#endif

#define PERMISSIVE_HOLD
#define CHORDAL_HOLD
#define FLOW_TAP_TERM 150

#define DYNAMIC_KEYMAP_LAYER_COUNT 10
#define TAPPING_FORCE_HOLD
#undef TAPPING_TERM
#define TAPPING_TERM 300

#define NO_MUSIC_MODE

#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3
#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_MODS_ENABLE

