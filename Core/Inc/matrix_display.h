/*
 * matrix_display.h
 *
 *  Created on: Sep 16, 2021
 *      Author: PC
 */

#ifndef INC_MATRIX_DISPLAY_H_
#define INC_MATRIX_DISPLAY_H_
#define NUMBER_OF_LED 5
void display_first_row(uint8_t b);
void display_second_row(uint8_t b);
void display_third_row(uint8_t b);
void display_fourth_row(uint8_t b);
void display_fifth_row(uint8_t b);

static uint8_t states[NUMBER_OF_LED] = {0x0 , 0x0 , 0x0 , 0x0 , 0x0};
void clearNumberOnClock(int num);
void setNumberOnClock(int num);
void clearAllClock();
#endif /* INC_MATRIX_DISPLAY_H_ */
