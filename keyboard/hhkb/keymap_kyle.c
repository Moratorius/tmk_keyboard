/* 
 * Kyle: my personal keymap
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |FN4|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|FN6|
     * |-----------------------------------------------------------|
     * |FN5  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |LCTL  |  A|  S|  D|FN3|  G|  H|  J|  K|  L|  ;|  '|Ent     |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn1|
     * `-----------------------------------------------------------'
     *       |Alt|LGui |        Space          |FN7  |FN8|
     *       `-------------------------------------------'
     */
    [0] = \
    KEYMAP(FN4, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,FN6, \
           FN5, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC, \
           LCTL,A,   S,   D, FN3,   G,   H,   J,   K,   L,  SCLN, QUOT,ENT, \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,FN1, \
                LALT,LGUI,         SPC,                FN7,FN8),

    /* Layer 1: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |MPRV|MNXT|MPLY|MSTP|EJCT| | |Psc|Slk|Pus|Up |  |Backs|
     * |-----------------------------------------------------------|
     * |Contro|VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |  +|  -|End|PgD|Dow|Shift |Fn1|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |         Space         |Gui  |Alt|
     *       `-------------------------------------------'
     */
    [1] = \
    KEYMAP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,   \
           CAPS,MPRV,MNXT,MPLY,MSTP,EJCT,TRNS,TRNS,PSCR,SLCK,PAUS, UP, TRNS, BSPC,      \
           LCTL,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,PENT,            \
           LSFT,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,RSFT,FN1,             \
                LALT,LGUI,          SPC,               RGUI,RALT),

    /* Layer 2: Stock Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn1|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |         Space         |Gui  |Alt|
     *       `-------------------------------------------'
     */
    [2] = \
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,   \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,       \
           LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,             \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,FN1,             \
                LALT,LGUI,          SPC,                RGUI,RALT),

    /* Layer 3: Vi mode
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Tab  |  |   |   |   |   |   |   |PgU|   |   |   |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|   |   |PgD|FN0|   |Lef|Dow|Up |Rig|   |   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |   |   |   |   |   |Shift |Fn1|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |         Space         |Gui  |Alt|
     *       `-------------------------------------------'
     */
    [3] = \
    KEYMAP(ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           TAB,   NO,  NO,  NO,  NO, NO,   NO,PGUP, NO, NO, NO,  NO,  NO,  BSPC, \
           LCTL,  NO,  NO,PGDN,TRNS, NO,  LEFT,DOWN,UP,  RGHT,NO,  NO,  ENT, \
           LSFT,NO,  NO,  NO,  NO,  NO,    NO,  NO,  NO, NO,   NO,RSFT,FN1, \
                LALT,LGUI,          SPC,                RGUI,RALT),

    /* Layer 4: Mouse mode
     * ,-----------------------------------------------------------.
     * |TNS|F1 | F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|TNS|TNS|
     * |-----------------------------------------------------------|
     * |Tab  |   |   |   |   |   |MwL|MwD|MwU|MwR|   |   |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|   |   |   |   |   |McL|McD|McU|McR|   |   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |Mb3|Mb2|Mb1|Mb4|Mb5|   |Shift |Fn1|
     * `-----------------------------------------------------------'
     *      |Alt |Gui  |          Mb1          |Gui  |Alt|
     *      `--------------------------------------------'
     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel
     */
    [4] = \
    KEYMAP(TRNS, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,TRNS, TRNS, \
            TAB, NO,  NO,  NO,  NO,  NO,  WH_L,WH_D,WH_U,WH_R,NO,  NO,  NO,  BSPC, \
            LCTL,NO,  ACL0,ACL1,ACL2,NO,  MS_L,MS_D,MS_U,MS_R, NO,QUOT,ENT, \
            LSFT,NO,  NO,  NO,  NO,  BTN3,BTN2,BTN1,BTN4,BTN5,SLSH,RSFT,FN1, \
                  TRNS,TRNS,          BTN1,               TRNS,TRNS),

    /* Layer 5: Numpad mode
     * ,-----------------------------------------------------------.
     * |Esc|   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |FN0  |  |   |   |   |   | 7 | 8 | 9 |   |   |   |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|   |   |   |   |   | 4 | 5 | 6 |   |   |   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   | 1 | 2 | 3 |   |   |Shift |Fn1|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |           0           |Gui  |Alt|
     *       `-------------------------------------------'
     */
    [5] = \
    KEYMAP(ESC,TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS,NO,  NO,  NO,  NO,  NO,   7,   8,   9,  NO,  NO,     NO,  NO,BSPC, \
           LCTL,NO,   NO,  NO,  NO,  NO,   4,   5,   6,  NO,    NO,   NO,ENT, \
           LSFT, NO,  NO,  NO,  NO,  NO,   1,   2,   3,  NO,  NO, RSFT, FN1, \
                LALT,LGUI,           0,                PDOT,RALT),

};


/* id for user defined functions */
enum function_id {
    LSHIFT_LPAREN,
};

enum macro_id {
    RGUI_PAREN,
    RALT_UNDERSCORE
};

/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const action_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_DEFAULT_LAYER_SET(0),                // Default layer
    [1] = ACTION_LAYER_MOMENTARY(1),                  // HHKB layer
    [2] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),      // LControl with tap Esc*
    [3] = ACTION_LAYER_TAP_KEY(3, KC_F),              // Hold f for vi mode
    [4] = ACTION_LAYER_TAP_KEY(4, KC_ESC),            // Hold escape for mouse mode
    [5] = ACTION_LAYER_TAP_KEY(5, KC_TAB),            // Hold tab for numpad mode
    [6] = ACTION_LAYER_TAP_KEY(4, KC_GRAVE),          // Hold grave for mouse mode   
    [7] = ACTION_MACRO_TAP(RGUI_PAREN),               // Macro: RGui with tap '('
    [8] = ACTION_MACRO_TAP(RALT_UNDERSCORE)           // Macro: RAlt with tap '_'

//  [x] = ACTION_LMOD_TAP_KEY(KC_LCTL, KC_BSPC),        // LControl with tap Backspace
//  [x] = ACTION_LMOD_TAP_KEY(KC_LCTL, KC_ESC),         // LControl with tap Esc
//  [x] = ACTION_FUNCTION_TAP(LSHIFT_LPAREN),           // Function: LShift with tap '('
};



/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case RGUI_PAREN:
            if (record->tap.count > 0 && !record->tap.interrupted) {
                return (record->event.pressed ?
                        MACRO( D(RSHIFT), D(9), U(9), U(RSHIFT), END ) : MACRO_NONE);
            } else {
                return (record->event.pressed ?
                        MACRO( D(RGUI), END ) : MACRO( U(RGUI), END ) );
            }
        case RALT_UNDERSCORE:
            if (record->tap.count > 0 && !record->tap.interrupted) {
                return (record->event.pressed ?
                        MACRO( D(RSHIFT), D(MINS), U(MINS), U(RSHIFT), END ) : MACRO_NONE);
            } else {
                return (record->event.pressed ?
                        MACRO( D(RALT), END ) : MACRO( U(RALT), END ) );
            }
    }
    return MACRO_NONE;
}



/*
 * user defined action function
 */
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case LSHIFT_LPAREN:
            // Shift parentheses example: LShft + tap '('
            // http://stevelosh.com/blog/2012/10/a-modern-space-cadet/#shift-parentheses
            // http://geekhack.org/index.php?topic=41989.msg1304899#msg1304899
            if (record->event.pressed) {
                if (record->tap.count > 0 && !record->tap.interrupted) {
                    if (record->tap.interrupted) {
                        dprint("tap interrupted\n");
                        register_mods(MOD_BIT(KC_LSHIFT));
                    }
                } else {
                    register_mods(MOD_BIT(KC_LSHIFT));
                }
            } else {
                if (record->tap.count > 0 && !(record->tap.interrupted)) {
                    add_weak_mods(MOD_BIT(KC_LSHIFT));
                    send_keyboard_report();
                    register_code(KC_9);
                    unregister_code(KC_9);
                    del_weak_mods(MOD_BIT(KC_LSHIFT));
                    send_keyboard_report();
                    record->tap.count = 0;  // ad hoc: cancel tap
                } else {
                    unregister_mods(MOD_BIT(KC_LSHIFT));
                }
            }
            break;
    }
}