/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#ifndef MATRIX_ROWS
#    define MATRIX_ROWS 8
#endif

#ifndef MATRIX_COLS
#    define MATRIX_COLS 5
#endif

#ifndef __ASSEMBLER__
#    include QMK_KEYBOARD_H
#endif

#define VIAL_KEYBOARD_UID {0xFD, 0x91, 0xD2, 0xB9, 0xFA, 0xD5, 0x59, 0xAB}
#define DIODE_DIRECTION COL2ROW
#define SOFT_SERIAL_PIN D2
#define MIDI_ADVANCED