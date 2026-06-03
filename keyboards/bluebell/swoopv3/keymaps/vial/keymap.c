/* Copyright 2022 James White <jamesmnw@gmail.com>
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
extern MidiDevice midi_device;

enum layers {
<<<<<<< HEAD
    _PULL1,
    _PUSH1,
    _PULL2,
    _PUSH2
=======
    _PUSH,
    _PULL
>>>>>>> 79976d324ddf06b3a1ba506841b66b7368d2d263
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,---------------------------------.     ,----------------------------------.
 * |  Q  |   W  |   E  |   R  |   T  |     |   Y  |   U  |   I  |   O  |   P  |
 * |-----+------+------+------+------|     |------+------+------+------+------|
 * |  A  |   S  |   D  |   F  |   G  |     |   H  |   J  |   K  |   L  |   ;  |
 * |-----+------+------+------+------|     ,------+------+------+------+------|
 * |  Z  |   X  |   C  |   V  |   B  |     |   N  |   M  |   ,  |   .  |   /  |
 * `------------+------+------+------|     |------+------+------+-------------'
 *              | LCTL | BSpc | Esc  |     | Ent  | Spc  | LAlt |
 *              `--------------------'     `--------------------'
 */

<<<<<<< HEAD
[_PULL1] = LAYOUT_split_3x5_3(
  // Left Hand (Cols 1-4)      // Right Hand (Cols 5-10)
  MI_F,    MI_C,    MI_Ds1,  MI_G1,   MI_Bb1,     MI_Ds2,  MI_G2,   MI_Bb2,  MI_Ds3,  MI_F3,
  MI_G,    MI_B,    MI_D1,   MI_F1,   MI_A1,      MI_B1,   MI_D2,   MI_F2,   MI_A2,   MI_B2,
  MI_A,    MI_Fs1,  MI_A1,   MI_C2,   MI_E2,      MI_Fs2,  MI_A2,   MI_C3,   MI_E3,   MI_Fs3,
                     KC_NO,   MO(1),   MO(1),       MO(1),   MO(1),   TO(3)
),
[_PUSH1] = LAYOUT_split_3x5_3(
  // Left Hand (Cols 1-4)      // Right Hand (Cols 5-10)
  MI_E,    MI_A,    MI_Cs1,  MI_A1,   MI_Gs1,     MI_Cs2,  MI_A2,   MI_Gs2,  MI_Cs3,  MI_A3,
  MI_C,    MI_G,    MI_C1,   MI_E1,   MI_G1,      MI_C2,   MI_E2,   MI_G2,   MI_C3,   MI_E3,
  MI_B,    MI_D1,   MI_G1,   MI_B1,   MI_D2,      MI_G2,   MI_B2,   MI_D3,   MI_G3,   MI_B3,
                  KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
),
[_PULL2] = LAYOUT_split_3x5_3(
  MI_F,    MI_Bb,   MI_Eb1,  MI_G1,   MI_Bb1,      MI_Eb2,  MI_G2,   MI_Bb2,  MI_Eb3,  MI_F3,
  MI_G,    MI_B,    MI_D1,   MI_F1,   MI_A1,       MI_B1,   MI_D2,   MI_F2,   MI_A2,   MI_B2,
  MI_A,    MI_Gs1,  MI_A1,   MI_C2,   MI_E2,       MI_Gs2,  MI_A2,   MI_C3,   MI_E3,   MI_Gs3,
                    KC_NO,   MO(1),   MO(1),       MO(1),   MO(1),   TO(0)
),
[_PUSH2] = LAYOUT_split_3x5_3(
  MI_E,    MI_A,    MI_Ds1,  MI_A1,   MI_As1,      MI_Ds2,  MI_A2,   MI_As2,  MI_Ds3,  MI_A3,
  MI_C,    MI_G,    MI_C1,   MI_E1,   MI_G1,       MI_C2,   MI_E2,   MI_G2,   MI_C3,   MI_E3,
  MI_B,    MI_D1,   MI_G1,   MI_B1,   MI_D2,       MI_G2,   MI_B2,   MI_D3,   MI_G3,   MI_B3,
                   KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
=======
[_PUSH] = LAYOUT_split_3x5_3(
  MI_E,    MI_A,    MI_Ds1,  MI_A1,   MI_As1,      MI_Ds2,  MI_A2,   MI_As2,  MI_Ds3,  MI_A3,
  MI_C,    MI_G,    MI_C1,   MI_E1,   MI_G1,       MI_C2,   MI_E2,   MI_G2,   MI_C3,   MI_E3,
  MI_B,    MI_D1,   MI_G1,   MI_B1,   MI_D2,       MI_G2,   MI_B2,   MI_D3,   MI_G3,   MI_B3,
                   KC_NO,   MO(1),   KC_NO,       KC_NO,   KC_NO,   KC_NO
),

[_PULL] = LAYOUT_split_3x5_3(
  MI_F,    MI_Bb,   MI_Eb1,  MI_G1,   MI_Bb1,      MI_Eb2,  MI_G2,   MI_Bb2,  MI_Eb3,  MI_F3,
  MI_G,    MI_B,    MI_D1,   MI_F1,   MI_A1,       MI_B1,   MI_D2,   MI_F2,   MI_A2,   MI_B2,
  MI_A,    MI_Gs1,  MI_A1,   MI_C2,   MI_E2,       MI_Gs2,  MI_A2,   MI_C3,   MI_E3,   MI_Gs3,
                   KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO
>>>>>>> 79976d324ddf06b3a1ba506841b66b7368d2d263
)
};
