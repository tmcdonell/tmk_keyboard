#include <util/delay.h>
#include "action_layer.h"
#include "action_util.h"
#include "bootloader.h"
#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Layer 0: Default Layer in DVORAK
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   ~    |   1  |   2  |   3  |   4  |   5  |  (   |           |  )   |   6  |   7  |   8  |   9  |   0  |  Esc   |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Tab   |   "  |   <  |   >  |   P  |   Y  |  {   |           |  }   |   F  |   G  |   C  |   R  |   L  |   +    |
     * |--------+------+------+------+------+------|  [   |           |  ]   |------+------+------+------+------+--------|
     * | LShift |   A  |   O  |   E  |   U  |   I  |------|           |------|   D  |   H  |   T  |   N  |   S  | RShift |
     * |--------+------+------+------+------+------|  ?   |           |  |   |------+------+------+------+------+--------|
     * | LCtrl  |   ;  |   Q  |   J  |   K  |   X  |  /   |           |  \   |   B  |   M  |   W  |   V  |   Z  |   _    |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |  Up  | Down | Hyper| LAlt | ~L1  |                                       | ~L1  | RGui | RAlt | Left | Rght |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | Del  | Space|       |  ~   | Tab  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | PgUp |       | Home |      |      |
     *                                 | Bksp | LGui |------|       |------| Ret  | Space|
     *                                 |      |      | PgDn |       | End  |      |      |
     *                                 `--------------------'       `--------------------'
     */
    KEYMAP(
        // left hand
         GRV,   1,   2,   3,   4,   5,  FN7,
         TAB,QUOT,COMM, DOT,   P,   Y, LBRC,
        LSFT,   A,   O,   E, FN6,   I,
         FN4,FN20,   Q,   J,   K,   X, SLSH,
          UP,DOWN, FN5,LALT, FN1,
                                       DEL, SPC,
                                           PGUP,
                                 FN21, FN3,PGDN,
        // right hand
             FN8, 6,   7,   8,   9,   0, ESC,
             RBRC,F,   G,   C,   R,   L, EQL,
                  D,   H,   T,   N,   S,RSFT,
             BSLS,B,   M,   W,   V,   Z,MINS,
                     FN2,RGUI,RALT,LEFT,RGHT,
         GRV,TAB,
        HOME,
         END,ENT,SPC
    ),

    /*
     * Layer 1 : Function keys, inverted-T arrow cluster, numpad
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Teensy |  F1  |  F2  |  F3  |  F4  |  F5  |  F11 |           |  F12 |  F6  |  F7  |  F8  |  F9  | F10  | POWER  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Trns  |      |      |  Up  |      |      |      |           |      |  +   | Kpd7 | Kpd8 | Kpd9 |  *   | Vol+   |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  Trns  |      | Left | Down | Rght |      |------|           |------|  -   | Kpd4 | Kpd5 | Kpd6 |  /   | Vol-   |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  Trns  |      |      |      |      |      |      |           |      |      | Kpd1 | Kpd2 | Kpd3 | Entr | Mute   |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       | Kp0  |      |  .   |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 | Trns | Trns |------|       |------| Trns | Trns |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */
    KEYMAP(
        // left hand
         FN0,  F1,  F2,  F3,  F4,  F5,  F11,
        TRNS,  NO,  NO,  UP,  NO,  NO, NO,
        TRNS,  NO,LEFT,DOWN,RGHT,  NO,
        TRNS,  NO,  NO,  NO,  NO,  NO, NO,
          NO,  NO,  NO,  NO,TRNS,
                                        NO,  NO,
                                             NO,
                                 TRNS,TRNS,  NO,
        // right hand
              F12,  F6,  F7,  F8,  F9, F10,POWER,
               NO,PPLS,  P7,  P8,  P9,PAST,VOLU,
                  PMNS,  P4,  P5,  P6,PSLS,VOLD,
               NO,  NO,  P1,  P2,  P3,PENT,MUTE,
                       TRNS,  NO,PDOT,  NO,  NO,
          NO,  NO,
          NO,
          NO,TRNS,TRNS
    ),

    /*
     * Layer 2 : Punctuation, momentarily switch to by holding 'u' on main layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |      |           |      |      |  $   |   #  |  @   |      |   -    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Trns  |      |      |      |      |      |      |           |      |      |  {   |   }  |  !   |  ?   |   +    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  Trns  |      |      |      | ~L2  |      |------|           |------|  ;   |  (   |   )  |  <   |  >   |   =    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  Trns  |      |      |      |      |      |      |           |      |      |  [   |   ]  |  "   |  |   |   \    |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 | Trns | Trns |------|       |------| Trns | Trns |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */
    KEYMAP(
        // left hand
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,  NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,  NO,  NO,  NO, FN6,  NO,
        TRNS,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,TRNS,
                                        NO,  NO,
                                             NO,
                                 TRNS,TRNS,  NO,
        // right hand
               NO,  NO,FN19,FN18,FN17,  NO,MINS,
               NO,  NO, FN9,FN10,FN13,FN14,PPLS,
                  SCLN, FN7, FN8,FN11,FN12, EQL,
               NO,  NO,LBRC,RBRC,FN16,FN15,BSLS,
                         NO,  NO,  NO,  NO,  NO,
          NO,  NO,
          NO,
          NO,TRNS,TRNS
    ),

/*
    // templates to copy from

    KEYMAP(  // LayerN: transparent on edges, all others are empty
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
    KEYMAP(  // LayerN: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
*/
};

/*
 * id for user defined functions
 */
typedef enum {
    TEENSY_KEY,
    // LSHIFT_LPAREN,
    // RSHIFT_RPAREN,
    COLON_SEMICOLON,
    // LAYER1_LPAREN,
    // LAYER1_RPAREN,
    LAYER1_KP0,
    SHIFT_DELETE,
} function_id;

/*
 * Fn action definitons
 */
const uint16_t PROGMEM fn_actions[] = {
    ACTION_FUNCTION(TEENSY_KEY),                                        // FN0  - Teensy key
    ACTION_LAYER_MOMENTARY(1),                                          // FN1  - Momentarily switch to layer 1 while holding
    ACTION_FUNCTION_TAP(LAYER1_KP0),                                    // FN2  - Momentarily switch to layer 1 while holding, Keypad0 if on layer 1

    ACTION_MODS_TAP_KEY(MOD_LGUI, KC_ESCAPE),                           // FN3  - Left Apple, Esc on tap
    ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESCAPE),                           // FN4  - Left Control, Esc on tap
    ACTION_MODS_TAP_KEY(MOD_LCTL|MOD_LSFT|MOD_LALT|MOD_LGUI, KC_CAPS),  // FN5  - Hyper (Command+control+option+shift), Caps lock on tap

    ACTION_LAYER_TAP_KEY(2, KC_U),                  // FN6  - Momentarily switch to layer 2 while holding, U on tap
    ACTION_MODS_KEY(MOD_LSFT, KC_9),                // FN7  - (
    ACTION_MODS_KEY(MOD_LSFT, KC_0),                // FN8  - )
    ACTION_MODS_KEY(MOD_LSFT, KC_LBRACKET),         // FN9  - {
    ACTION_MODS_KEY(MOD_LSFT, KC_RBRACKET),         // FN10 - {
    ACTION_MODS_KEY(MOD_LSFT, KC_COMM),             // FN11 - <
    ACTION_MODS_KEY(MOD_LSFT, KC_DOT),              // FN12 - >
    ACTION_MODS_KEY(MOD_LSFT, KC_1),                // FN13 - !
    ACTION_MODS_KEY(MOD_LSFT, KC_SLASH),            // FN14 - ?
    ACTION_MODS_KEY(MOD_LSFT, KC_BSLASH),           // FN15 - |
    ACTION_MODS_KEY(MOD_LSFT, KC_QUOTE),            // FN16 - "
    ACTION_MODS_KEY(MOD_LSFT, KC_2),                // FN17 - @
    ACTION_MODS_KEY(MOD_LSFT, KC_3),                // FN18 - #
    ACTION_MODS_KEY(MOD_LSFT, KC_4),                // FN19 - $

    ACTION_FUNCTION(COLON_SEMICOLON),               // FN20 - Swap ':' and ';'
    ACTION_FUNCTION(SHIFT_DELETE),                  // FN21 - Shift+Delete = Forward delete

    // ACTION_FUNCTION_TAP(LAYER1_LPAREN),             // FNx  - Momentarily switch to layer 1 while holding, ( on tap
    // ACTION_FUNCTION_TAP(LSHIFT_LPAREN),             // FNx  - Left parenthesis with tap, else left shift
    // ACTION_FUNCTION_TAP(RSHIFT_RPAREN),             // FNx  - Right parenthesis with tap, else right shift
};

#if 0
void action_shift_paren(keyrecord_t *record, uint8_t mod, uint8_t key)
{
    if(record->event.pressed)
        dprint("P");
    else
        dprint("R");

    dprintf("[%d]", record->tap.count);

    if (record->tap.interrupted)
        dprint("i");

    dprint(": ");

    if (record->event.pressed) {
        if (record->tap.count > 0 && !record->tap.interrupted) {
            if (record->tap.interrupted) {
                dprint("tap interrupted");
                register_mods(mod);
            }
        } else {
            register_mods(mod);
        }
    } else {
        if (record->tap.count > 0 && !record->tap.interrupted) {
            dprint("tap");
            add_weak_mods(mod);
            send_keyboard_report();
            register_code(key);
            unregister_code(key);
            del_weak_mods(mod);
            send_keyboard_report();
            record->tap.count=0;  // ad hoc: cancel tap
        } else {
            unregister_mods(mod);
        }
    }
    dprint("\n");
}
#endif

void action_colon_semicolon(keyrecord_t *record)
{
    if (record->event.pressed) {
        uint8_t shifted = get_mods() & (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT));

        if (shifted) {
            dprint("shifted");
            del_mods(shifted);                    // remove shift
            add_key(KC_SCOLON);
            send_keyboard_report();               // send ';' (without shift)
            add_mods(shifted);                    // restore shift state, but don't bother sending immediately
        } else {
            dprint("un-shifted");
            add_weak_mods(MOD_BIT(KC_LSHIFT));
            add_key(KC_SCOLON);
            send_keyboard_report();               // send ':' (with shift)
            del_weak_mods(MOD_BIT(KC_LSHIFT));
        }
    } else {
        del_key(KC_SCOLON);                       // slightly incorrect, since we will send the key-up...
        send_keyboard_report();                   // ...event for the un-modded key (':' for ';' and vice versa)
    }
}

void action_shift_delete(keyrecord_t *record)
{
    uint8_t shifted = get_mods() & (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT));
    uint8_t key;

    if (shifted) {
        // Remove the shift mod?
        key = KC_DELETE;
    } else {
        key = KC_BSPACE;
    }

    if (record->event.pressed) {
        add_key(key);
    } else {
        del_key(key);
    }

    send_keyboard_report();
}

#if 0
void action_layer1_tap_paren(keyrecord_t *record, uint8_t side)
{
    if (record->event.pressed) {
        if (record->tap.count == 0 || record->tap.interrupted) {
            layer_on(1);
        }
    }
    else {
        if (record->tap.count > 0 && !record->tap.interrupted) {
            uint8_t key;
            uint8_t mod = 0;

            if (side == 0) {
                mod = MOD_BIT(KC_LSHIFT);
                key = KC_9;
            } else {
                uint8_t layer = biton32(layer_state);
                if (layer == 0) {
                    mod = MOD_BIT(KC_LSHIFT);
                    key = KC_0;
                } else {  // layer 1
                    key = KC_KP_0;
                }
            }

            add_weak_mods(mod);
            send_keyboard_report();
            register_code(key);
            unregister_code(key);
            del_weak_mods(mod);
            send_keyboard_report();
            record->tap.count = 0;
        } else {
            layer_off(1);
        }
    }
}
#endif

void action_layer1_kp0(keyrecord_t *record)
{
    if (record->event.pressed) {
        if (record->tap.count == 0 || record->tap.interrupted) {
            layer_on(1);
        }
    } else {
        /*
         * Key-up for a tap event sends Keypad0.
         * Regular key-up ends the momentary switch to layer 1.
         */
        if (record->tap.count > 0 && !record->tap.interrupted && biton32(layer_state) == 1) {
            register_code(KC_KP_0);
            unregister_code(KC_KP_0);
            send_keyboard_report();
            record->tap.count = 0;
        } else {
            layer_off(1);
        }
    }
}

void action_teensy(void)
{
    dprint("\n\n");
    dprint("Jumping to bootloader...\n");
    clear_keyboard();
    _delay_ms(100);
    bootloader_jump();    // should not return
}

void action_function(keyrecord_t *record, function_id id, uint8_t opt)
{
    switch (id) {
    case TEENSY_KEY:
        action_teensy();
        break;

#if 0
    case LSHIFT_LPAREN:
        action_shift_paren(record, MOD_BIT(KC_LSHIFT), KC_9);
        break;

    case RSHIFT_RPAREN:
        action_shift_paren(record, MOD_BIT(KC_RSHIFT), KC_0);
        break;
#endif
    case COLON_SEMICOLON:
        action_colon_semicolon(record);
        break;

    case SHIFT_DELETE:
        action_shift_delete(record);
        break;

#if 0
    case LAYER1_LPAREN:
        action_layer1_tap_paren(record, 0);
        break;

    case LAYER1_RPAREN:
        action_layer1_tap_paren(record, 1);
        break;
#endif
    case LAYER1_KP0:
        action_layer1_kp0(record);
        break;
    }
}

