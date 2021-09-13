/*
 * display_segment.c
 *
 *  Created on: Sep 13, 2021
 *      Author: PC
 */
#include "main.h"
#include "segment_display.h"


//Maximum number of digits
#define NUMBER_OF_DECIMAL_DIGITS 10

/*LED CONVERSION
 * A is least significant bit
 * G is the most significant bit
 * E.g: 0x3f= 0b0111111 => LED displays 0*/
static uint8_t sevenSegmentLEDConversion[NUMBER_OF_DECIMAL_DIGITS] = {0x3f, 0x6, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x7, 0x7F, 0x6F};


//Buffer variable
static uint8_t segmentBuffer;

uint8_t update_value_segment(uint8_t value){
	 if (value > NUMBER_OF_DECIMAL_DIGITS) return 0;
	 segmentBuffer = value;
	 return 1;
}

void display_segment_number(void){
	uint8_t temp = sevenSegmentLEDConversion[segmentBuffer];
	//AND WITH EACH BIT IN 7 STARTING BITS
	//A
	if(temp & 0x01){
		HAL_GPIO_WritePin(A_GPIO_Port , A_Pin , 0);
	} else{
		HAL_GPIO_WritePin(A_GPIO_Port , A_Pin , 1);
	}
	//B
	if(temp & 0x02){
		HAL_GPIO_WritePin(B_GPIO_Port , B_Pin , 0);
	} else{
		HAL_GPIO_WritePin(B_GPIO_Port , B_Pin , 1);
	}
	//C
	if(temp & 0x04){
		HAL_GPIO_WritePin(C_GPIO_Port , C_Pin , 0);
	} else{
		HAL_GPIO_WritePin(C_GPIO_Port , C_Pin , 1);
	}
	//D
	if(temp & 0x08){
		HAL_GPIO_WritePin(D_GPIO_Port , D_Pin , 0);
	} else{
		HAL_GPIO_WritePin(D_GPIO_Port , D_Pin , 1);
	}
	//E
	if(temp & 0x10){
		HAL_GPIO_WritePin(E_GPIO_Port , E_Pin , 0);
	} else{
		HAL_GPIO_WritePin(E_GPIO_Port , E_Pin , 1);
	}
	//F
	if(temp & 0x20){
		HAL_GPIO_WritePin(F_GPIO_Port , F_Pin , 0);
	} else{
		HAL_GPIO_WritePin(F_GPIO_Port , F_Pin , 1);
	}
	//G
	if(temp & 0x40){
		HAL_GPIO_WritePin(G_GPIO_Port , G_Pin , 0);
	} else{
		HAL_GPIO_WritePin(G_GPIO_Port , G_Pin , 1);
	}


}
