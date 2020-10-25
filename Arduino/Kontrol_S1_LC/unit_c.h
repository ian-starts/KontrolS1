#ifndef UNIT_C
#define UNIT_C

#define CUE_CHIP_NR 0
#define CUP_CHIP_NR 1
#define DISP_CHIP_NR 2
#define LP_CHIP_NR 3
#define LDG_CHIP_NR 4
#define RDG_CHIP_NR 5
#define FX_CHIP_NR 6

#define BUTTONS_SERIAL_OFF_STATE 0b00000000, 0b00000000, 0b00000000, 0b00000000
#define LEDS_SERIAL_OFF_STATE 0b11111111, 0b11111111, 0b00000000, 0b11000000, 0b00000000, 0b01010101, 0b00000000

#define DIGIT_STATE_1_32 0b00011000, 0b10100100
#define DIGIT_STATE_1_16 0b01111001, 0b10010000
#define DIGIT_STATE_1_8 0b11111011, 0b10000000
#define DIGIT_STATE_1_4 0b11111011, 0b10001011
#define DIGIT_STATE_1_2 0b11111011, 0b10100100
#define DIGIT_STATE_1 0b11111111, 0b11001111
#define DIGIT_STATE_2 0b11111111, 0b10100100
#define DIGIT_STATE_4 0b11111111, 0b10001011
#define DIGIT_STATE_8 0b11111111, 0b10000000
#define DIGIT_STATE_16 0b01111101, 0b10010000
#define DIGIT_STATE_32 0b00011100, 0b10100100

#endif