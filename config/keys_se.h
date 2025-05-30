#pragma once
#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// Aliases
#define SE_SECT GRAVE     // §
#define SE_1    N1        // 1
#define SE_2    N2        // 2
#define SE_3    N3    // 3
#define SE_4    N4    // 4
#define SE_5    N5    // 5
#define SE_6    N6    // 6
#define SE_7    N7    // 7
#define SE_8    N8    // 8
#define SE_9    N9    // 9
#define SE_0    N0    // 0
#define SE_PLUS MINUS // +
#define SE_ACUT EQUAL  // ´ (dead)
#define SE_Q    Q    // Q
#define SE_W    W    // W
#define SE_E    E    // E
#define SE_R    R    // R
#define SE_T    T    // T
#define SE_Y    Y    // Y
#define SE_U    U    // U
#define SE_I    I    // I
#define SE_O    O    // O
#define SE_P    P    // P
#define SE_ARNG LBKT // Å
#define SE_DIAE RBKT // ¨
#define SE_A    A    // A
#define SE_S    S    // S
#define SE_D    D    // D
#define SE_F    F    // F
#define SE_G    G    // G
#define SE_H    H    // H
#define SE_J    J    // J
#define SE_K    K    // K
#define SE_L    L    // L
#define SE_ODIA SEMI // Ö
#define SE_ADIA APOS // Ä
#define SE_QUOT NUHS // '
#define SE_LABK NUBS // <
#define SE_Z    Z    // Z
#define SE_X    X    // X
#define SE_C    C    // C
#define SE_V    V    // V
#define SE_B    B    // B
#define SE_N    N    // N
#define SE_M    M    // M
#define SE_COMM COMMA // ,
#define SE_DOT  DOT   // .
#define SE_MINS FSLH  // -
#define SE_HALF (LS(SE_SECT)) // ½
#define SE_EXLM (LS(SE_1))    // !
#define SE_DQUO (LS(SE_2))    // "
#define SE_HASH (LS(SE_3))    // #
#define SE_CURR (LS(SE_4))    // ¤
#define SE_PERC (LS(SE_5))    // %
#define SE_AMPR (LS(SE_6))    // &
#define SE_SLSH (LS(SE_7))    // /
#define SE_LPRN (LS(SE_8))    // (
#define SE_RPRN (LS(SE_9))    // )
#define SE_EQL  (LS(SE_0))    // =
#define SE_QUES (LS(SE_PLUS)) // ?
#define SE_GRV  (LS(SE_ACUT)) // ` (dead)
#define SE_CIRC (LS(SE_DIAE)) // ^ (dead)
#define SE_ASTR (LS(SE_QUOT)) // *
#define SE_RABK (LS(SE_LABK)) // >
#define SE_SCLN (LS(SE_COMM)) // ;
#define SE_COLN (LS(SE_DOT))  // :
#define SE_UNDS (LS(SE_MINS)) // _
#define SE_AT   (RA(SE_2))    // @
#define SE_PND  (RA(SE_3))    // £
#define SE_DLR  (RA(SE_4))    // $
#define SE_EURO (RA(SE_5))    // €
#define SE_LCBR (RA(SE_7))    // {
#define SE_LBRC (RA(SE_8))    // [
#define SE_RBRC (RA(SE_9))    // ]
#define SE_RCBR (RA(SE_0))    // }
#define SE_BSLS (RA(SE_PLUS)) // (backslash)
#define SE_TILD (RA(SE_DIAE)) // ~ (dead)
#define SE_PIPE (RA(SE_LABK)) // |
#define SE_MICR (RA(SE_M))    // µ