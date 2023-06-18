/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#undef SERIAL_NUMBER
#define SERIAL_NUMBER "purdea.ro:minirazz:vial:f64c2b3c"

#define VIAL_KEYBOARD_UID {0x49, 0x7B, 0x5D, 0x85, 0x5F, 0xD1, 0x6E, 0xA7}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 1, 0xd }

// The following info is already in info.json, but the vial repository doesn't recognize it yet.
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 1

#define DYNAMIC_KEYMAP_MACRO_COUNT 32
#define DYNAMIC_KEYMAP_LAYER_COUNT 16

#define QK_USER_0 USER00
