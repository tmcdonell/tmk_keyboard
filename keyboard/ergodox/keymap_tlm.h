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
        GRV,    1,   2,   3,   4,   5,  FN3,
        TAB, QUOT,COMM, DOT,   P,   Y, LBRC,
         FN7,   A,   O,   E,   U,   I,
         FN6, FN9,   Q,   J,   K,   X, SLSH,
          UP,DOWN,  NO,LALT, FN1,
                                       DEL,  NO,
                                           PGUP,
                                 BSPC, FN5,PGDN,
        // right hand
             FN4, 6,   7,   8,   9,   0, ESC,
             RBRC,F,   G,   C,   R,   L, EQL,
                  D,   H,   T,   N,   S, FN8,
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
        FN0 ,F1,  F2,  F3,  F4,  F5,  F11,
          NO,  NO,  NO,  UP,  NO,  NO, NO,
          NO,  NO,LEFT,DOWN,RGHT,  NO,
          NO,  NO,  NO,  NO,  NO,  NO, NO,
        MRWD,MPLY,MFFD,  NO,TRNS,
                                        NO,  NO,
                                             NO,
                                 TRNS,TRNS,  NO,
        // right hand
             F12, F6,  F7,  F8,  F9,   F10,POWER,
               NO,PPLS,  P7,  P8,  P9,PAST,VOLU,
                  PMNS,  P4,  P5,  P6,PSLS,VOLD,
               NO,  NO,  P1,  P2,  P3,PENT,MUTE,
                         P0,  NO,PDOT,  NO,  NO,
          NO,  NO,
          NO,
          NO,TRNS,TRNS
    ),

    // HACK!! ~L1 on the right half should be a function that determines what to
    //        do on the key up event depending on the state of the ~L1 on the
    //        left half
    KEYMAP(  // Layer2: transparent to layer one, but toggle back to zero
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
                        FN1,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
};

/*
 * id for user defined functions
 */
enum function_id {
    TEENSY_KEY,
    LSHIFT_LPAREN,
    RSHIFT_RPAREN,
    COLON_SEMICOLON,
};

/*
 * Fn action definitons
 */
static const uint16_t PROGMEM fn_actions[] = {
    [0] =   ACTION_FUNCTION(TEENSY_KEY),                    // FN0  - Teensy key
    [1] =   ACTION_LAYER_MOMENTARY(1),                      // FN1  - Momentarily turn on layer 1 while holding
    [2] =   ACTION_LAYER_MOMENTARY(2),                      // FN2  - Hacks for momentary layer switching

    [3] =   ACTION_MODS_KEY(MOD_LSFT, KC_9),                // FN3  - Left parenthesis
    [4] =   ACTION_MODS_KEY(MOD_LSFT, KC_0),                // FN4  - Right parenthesis

    [5] =   ACTION_MODS_TAP_KEY(MOD_LGUI, KC_ESCAPE),       // FN5  - Escape with tap left apple
    [6] =   ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESCAPE),       // FN6  - Escape with tap left control
    [7] =   ACTION_FUNCTION_TAP(LSHIFT_LPAREN),             // FN7  - Left parenthesis with tap, else left shift
    [8] =   ACTION_FUNCTION_TAP(RSHIFT_RPAREN),             // FN8  - Right parenthesis with tap, else right shift
    [9] =   ACTION_FUNCTION(COLON_SEMICOLON),               // FN9  - Swap ':' and ';'
};

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
            add_mods(MOD_BIT(KC_LSHIFT));
            add_key(KC_SCOLON);
            send_keyboard_report(); // send ':'
            del_mods(MOD_BIT(KC_LSHIFT));
        }
    } else {
        del_key(KC_SCOLON);
        send_keyboard_report();
    }
}

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJumping to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
    }

    else if (id == LSHIFT_LPAREN) {
        action_shift_paren(record, MOD_BIT(KC_LSHIFT), KC_9);
    }

    else if (id == RSHIFT_RPAREN) {
        action_shift_paren(record, MOD_BIT(KC_RSHIFT), KC_0);
    }

    else if (id == COLON_SEMICOLON) {
        action_colon_semicolon(record);
    }
}

