static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
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
     *   |  Up  | Down |      | LAlt | ~L1  |                                       | ~L1  | RGui | RAlt | Left | Rght |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | Del  |      |       |  ~   | Tab  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | PgUp |       | Home |      |      |
     *                                 | Bksp | LGui |------|       |------| Ret  | Space|
     *                                 |      |      | PgDn |       | End  |      |      |
     *                                 `--------------------'       `--------------------'
     */
    KEYMAP(
        // left hand
        GRV,    1,   2,   3,   4,   5,  FN5,
        TAB, QUOT,COMM, DOT,   P,   Y, LBRC,
        LSFT,   A,   O,   E,   U,   I,
         FN4,SCLN,   Q,   J,   K,   X, SLSH,
          UP,DOWN,  NO,LALT, FN1,
                                       DEL,  NO,
                                           PGUP,
                                 BSPC, FN3,PGDN,
        // right hand
             FN6, 6,   7,   8,   9,   0, ESC,
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
     *           Also duplicated to layer 2 due to behaviour of ACTION_LAYER_MOMENTARY
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Teensy |  F1  |  F2  |  F3  |  F4  |  F5  |  F11 |           |  F12 |  F6  |  F7  |  F8  |  F9  | F10  | POWER  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |  Up  |      |      |      |           |      |  +   | Kpd7 | Kpd8 | Kpd9 |  *   | Vol+   |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      | Left | Down | Rght |      |------|           |------|  -   | Kpd4 | Kpd5 | Kpd6 |  /   | Vol-   |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      | Kpd1 | Kpd2 | Kpd3 | Entr | Mute   |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | Prev | Play | Next |      |      |                                       | Kp0  |      |  .   |      |      |
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
        MFFD,  NO,  NO,  UP,  NO,  NO, NO,
        MPLY,  NO,LEFT,DOWN,RGHT,  NO,
        MRWD,  NO,  NO,  NO,  NO,  NO, NO,
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
    // COLON_SEMICOLON,
    LAYER1_LPAREN,
    LAYER1_RPAREN,
} function_id;

/*
 * Fn action definitons
 */
static const uint16_t PROGMEM fn_actions[] = {
    [0] =   ACTION_FUNCTION(TEENSY_KEY),                    // FN0  - Teensy key
    [1] =   ACTION_FUNCTION_TAP(LAYER1_LPAREN),             // FN1  - Momentarily turn on layer 1 while holding, ( on tap
    [2] =   ACTION_FUNCTION_TAP(LAYER1_RPAREN),             // FN2  - Momentarily turn on layer 1 while holding, ) on tap

    [3] =   ACTION_MODS_TAP_KEY(MOD_LGUI, KC_ESCAPE),       // FN3  - Escape with tap left apple
    [4] =   ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESCAPE),       // FN4  - Escape with tap left control

    [5] =   ACTION_MODS_KEY(MOD_LSFT, KC_9),                // FN5  - Left parenthesis
    [6] =   ACTION_MODS_KEY(MOD_LSFT, KC_0),                // FN6  - Right parenthesis

    // [7] =   ACTION_FUNCTION_TAP(LSHIFT_LPAREN),             // FN7  - Left parenthesis with tap, else left shift
    // [8] =   ACTION_FUNCTION_TAP(RSHIFT_RPAREN),             // FN8  - Right parenthesis with tap, else right shift
    // [9] =   ACTION_FUNCTION(COLON_SEMICOLON),               // FN9  - Swap ':' and ';'
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
#if 0
void action_colon_semicolon(keyrecord_t *record)
{
    if (record->event.pressed) {
        uint8_t shifted = get_mods() & (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT));

        if (shifted) {
            dprint("shifted");
            del_mods(shifted);      // remove shift
            add_key(KC_SCOLON);
            send_keyboard_report(); // send ';' without shift
            add_mods(shifted);      // add shift
        } else {
            dprint("un-shifted");
            add_weak_mods(MOD_BIT(KC_LSHIFT));
            add_key(KC_SCOLON);
            send_keyboard_report(); // send ':'
            del_weak_mods(MOD_BIT(KC_LSHIFT));
        }
    } else {
        del_key(KC_SCOLON);
        send_keyboard_report();
    }
}
#endif

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

void action_teensy(void)
{
    dprint("\n\n");
    dprint("Jumping to bootloader...\n");
    clear_keyboard();
    _delay_ms(100);
    bootloader_jump();    // should not return
}

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
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

    case COLON_SEMICOLON:
        action_colon_semicolon(record);
        break;
#endif
    case LAYER1_LPAREN:
        action_layer1_tap_paren(record, 0);
        break;

    case LAYER1_RPAREN:
        action_layer1_tap_paren(record, 1);
        break;
    }
}

