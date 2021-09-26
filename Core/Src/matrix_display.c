/*
 * matrix_display.c
 *
 *  Created on: Sep 16, 2021
 *      Author: PC
 */

#include "main.h"
#include "matrix_display.h"
//NUMBER OF LEDS PER ROW
#define LED_PER_ROW 5
//NUMBER OF ROWS

//NumberOnClock utility
#define MAX_INDEX 12

void setNumberOnClock(int num){
switch (num){
	case 0:
		HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 0) ;
		break;
	case 1:
		HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 0) ;
		break;
	case 2:
		HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 0) ;
		break;
	case 3:
		HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 0) ;
		break;
	case 4:
		HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 0) ;
		break;
	case 5:
		HAL_GPIO_WritePin(_6_GPIO_Port , _6_Pin , 0) ;
		break;
	case 6:
		HAL_GPIO_WritePin(_7_GPIO_Port , _7_Pin , 0) ;
		break;
	case 7:
		HAL_GPIO_WritePin(_8_GPIO_Port , _8_Pin , 0) ;
		break;
	case 8:
		HAL_GPIO_WritePin(_9_GPIO_Port , _9_Pin , 0) ;
		break;
	case 9:
		HAL_GPIO_WritePin(_10_GPIO_Port , _10_Pin , 0) ;
		break;
	case 10:
		HAL_GPIO_WritePin(_11_GPIO_Port , _11_Pin , 0) ;
		break;
	case 11:
		HAL_GPIO_WritePin(_12_GPIO_Port , _12_Pin , 0) ;
		break;
	HAL_Delay(DELAY_TIME );
	}
}
void clearNumberOnClock(int num){
	switch (num){
	case 0:
		HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 1) ;
		break;
	case 1:
		HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 1) ;
		break;
	case 2:
		HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 1) ;
		break;
	case 3:
		HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 1) ;
		break;
	case 4:
		HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 1) ;
		break;
	case 5:
		HAL_GPIO_WritePin(_6_GPIO_Port , _6_Pin , 1) ;
		break;
	case 6:
		HAL_GPIO_WritePin(_7_GPIO_Port , _7_Pin , 1) ;
		break;
	case 7:
		HAL_GPIO_WritePin(_8_GPIO_Port , _8_Pin , 1) ;
		break;
	case 8:
		HAL_GPIO_WritePin(_9_GPIO_Port , _9_Pin , 1) ;
		break;
	case 9:
		HAL_GPIO_WritePin(_10_GPIO_Port , _10_Pin , 1) ;
		break;
	case 10:
		HAL_GPIO_WritePin(_11_GPIO_Port , _11_Pin , 1) ;
		break;
	case 11:
		HAL_GPIO_WritePin(_12_GPIO_Port , _12_Pin , 1) ;
		break;
	HAL_Delay(DELAY_TIME );
	}

}
void clearAllClock(){
	HAL_GPIO_WritePin(_6_GPIO_Port , _6_Pin , 1) ;
	HAL_GPIO_WritePin(_7_GPIO_Port , _7_Pin , 1) ;
	HAL_GPIO_WritePin(_8_GPIO_Port , _8_Pin , 1) ;
	HAL_GPIO_WritePin(_9_GPIO_Port , _9_Pin , 1) ;
	HAL_GPIO_WritePin(_10_GPIO_Port , _10_Pin , 1) ;
	HAL_GPIO_WritePin(_11_GPIO_Port , _11_Pin , 1) ;
	HAL_GPIO_WritePin(_12_GPIO_Port , _12_Pin , 1) ;

	HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 1) ;
	HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 1) ;
	HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 1) ;
	HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 1) ;
	HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 1) ;
	HAL_Delay(DELAY_TIME );
}
