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

#define DELAY_TIME 25
//NumberOnClock utility
#define MAX_INDEX 12


void display_first_row(uint8_t b){
	  HAL_GPIO_WritePin(_6_GPIO_Port , _6_Pin , 0) ;
	  if(b & 0x10){
		  HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 1) ;
	  }else{
		  HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 0) ;
	  }
	  if(b & 0x08){
		  HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 1) ;
	  }else{
		  HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 0) ;
	  }
	  if(b & 0x04){
		  HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 1) ;
	  }else{
		  HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 0) ;
	  }
	  if(b & 0x02){
		  HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 1) ;
	  }else{
		  HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 0) ;
	  }
	  if(b & 0x01){
		  HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 1) ;
	  }else{
		  HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 0) ;
	  }
	  states[0] = b ;
	  HAL_Delay(DELAY_TIME) ;
	  HAL_GPIO_WritePin(_6_GPIO_Port , _6_Pin , 1) ;
}
void display_second_row(uint8_t b){
	 HAL_GPIO_WritePin(_7_GPIO_Port , _7_Pin , 0) ;
	 if(b & 0x10){
	 		  HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 1) ;
	 	  }else{
	 		  HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 0) ;
	 	  }
	 	  if(b & 0x08){
	 		  HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 1) ;
	 	  }else{
	 		  HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 0) ;
	 	  }
	 	  if(b & 0x04){
	 		  HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 1) ;
	 	  }else{
	 		  HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 0) ;
	 	  }
	 	  if(b & 0x02){
	 		  HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 1) ;
	 	  }else{
	 		  HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 0) ;
	 	  }
	 	  if(b & 0x01){
	 		  HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 1) ;
	 	  }else{
	 		  HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 0) ;
	 	  }
	 	  states[1] = b ;
		  HAL_Delay(DELAY_TIME) ;
		  HAL_GPIO_WritePin(_7_GPIO_Port , _7_Pin , 1) ;
}
void display_third_row(uint8_t b){
	 HAL_GPIO_WritePin(_8_GPIO_Port , _8_Pin , 0) ;
	 if(b & 0x10){
	 		  HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 1) ;
	 	  }else{
	 		  HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 0) ;
	 	  }
	 	  if(b & 0x08){
	 		  HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 1) ;
	 	  }else{
	 		  HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 0) ;
	 	  }
	 	  if(b & 0x04){
	 		  HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 1) ;
	 	  }else{
	 		  HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 0) ;
	 	  }
	 	  if(b & 0x02){
	 		  HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 1) ;
	 	  }else{
	 		  HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 0) ;
	 	  }
	 	  if(b & 0x01){
	 		  HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 1) ;
	 	  }else{
	 		  HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 0) ;
	 	  }
	 	  states[2] = b ;
		  HAL_Delay(DELAY_TIME) ;
		  HAL_GPIO_WritePin(_8_GPIO_Port , _8_Pin , 1) ;
}
void display_fourth_row(uint8_t b){
	 HAL_GPIO_WritePin(_9_GPIO_Port , _9_Pin , 0) ;
	 if(b & 0x10){
	 		  HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 1) ;
	 	  }else{
	 		  HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 0) ;
	 	  }
	 	  if(b & 0x08){
	 		  HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 1) ;
	 	  }else{
	 		  HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 0) ;
	 	  }
	 	  if(b & 0x04){
	 		  HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 1) ;
	 	  }else{
	 		  HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 0) ;
	 	  }
	 	  if(b & 0x02){
	 		  HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 1) ;
	 	  }else{
	 		  HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 0) ;
	 	  }
	 	  if(b & 0x01){
	 		  HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 1) ;
	 	  }else{
	 		  HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 0) ;
	 	  }
	 	  states[3] = b ;
		  HAL_Delay(DELAY_TIME) ;
		  HAL_GPIO_WritePin(_9_GPIO_Port , _9_Pin , 1) ;
}
void display_fifth_row(uint8_t b){
	 HAL_GPIO_WritePin(_10_GPIO_Port , _10_Pin , 0) ;
	 if(b & 0x10){
	 		  HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 1) ;
	 	  }else{
	 		  HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 0) ;
	 	  }
	 	  if(b & 0x08){
	 		  HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 1) ;
	 	  }else{
	 		  HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 0) ;
	 	  }
	 	  if(b & 0x04){
	 		  HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 1) ;
	 	  }else{
	 		  HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 0) ;
	 	  }
	 	  if(b & 0x02){
	 		  HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 1) ;
	 	  }else{
	 		  HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 0) ;
	 	  }
	 	  if(b & 0x01){
	 		  HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 1) ;
	 	  }else{
	 		  HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 0) ;
	 	  }
	 	  states[4] = b ;
		  HAL_Delay(DELAY_TIME) ;
		  HAL_GPIO_WritePin(_10_GPIO_Port , _10_Pin , 1) ;
}

void setNumberOnClock(int num){
switch (num){
	case 0:
		 states[0] = states[0] | (1 << 3);
		display_first_row(states[0]);
		break;
	case 1:
		states[0] = states[0] | (1 << 2);
		display_first_row(states[0]);
		break;
	case 2:
		states[0] = states[0] | (1 << 1);
		display_first_row(states[0]);
		break;
	case 3:
		states[1] = states[1] | (1 << 4);
		display_second_row(states[1]);
		break;
	case 4:
		states[1] = states[1] | (1 << 0);
		display_second_row(states[1]);
		break;
	case 5:
		states[2] = states[2] | (1 << 4);
		display_third_row(states[2]);
		break;
	case 6:
		states[2] = states[2] | (1 << 0);
		display_third_row(states[2]);
		break;
	case 7:
		states[3] = states[3] | (1 << 4);
		display_fourth_row(states[3]);
		break;
	case 8:
		states[3] = states[3] | (1 << 0);
		display_fourth_row(states[3]);
		break;
	case 9:
		states[4] = states[4] | (1 << 3);
		display_fifth_row(states[4]);
		break;
	case 10:
		states[4] = states[4] | (1 << 2);
		display_fifth_row(states[4]);
		break;
	case 11:
		states[4] = states[4] | (1 << 1);
		display_fifth_row(states[4]);
		break;
	}
}
void clearNumberOnClock(int num){
	switch (num){
	case 0:
		if ((int)states[0] - 8 >= 0) states[0] = (uint8_t)((int)states[0] - 8);
		display_first_row(states[0]);
		break;
	case 1:
		if ((int)states[0] - 4 >= 0) states[0] = (uint8_t)((int)states[0] - 4);
		display_first_row(states[0]);
		break;
	case 2:
		if ((int)states[0] - 2 >= 0) states[0] = (uint8_t)((int)states[0] - 2);
		display_first_row(states[0]);
		break;
	case 3:
		if ((int)states[1] - 16 >= 0) states[1] = (uint8_t)((int)states[1] - 16);
		display_second_row(states[1]);
		break;
	case 4:
		if ((int)states[1] - 1 >= 0) states[1] = (uint8_t)((int)states[1] - 1);
		display_second_row(states[1]);
		break;
	case 5:
		if ((int)states[2] - 16 >= 0) states[2] = (uint8_t)((int)states[2] - 16);
		display_third_row(states[2]);
		break;
	case 6:
		if ((int)states[2] - 1 >= 0) states[2] = (uint8_t)((int)states[2] - 1);
		display_third_row(states[2]);
		break;
	case 7:
		if ((int)states[3] - 16 >= 0) states[3] = (uint8_t)((int)states[3] - 16);
		display_fourth_row(states[3]);
		break;
	case 8:
		if ((int)states[3] - 1 >= 0) states[3] = (uint8_t)((int)states[3] - 1);
		display_fourth_row(states[3]);
		break;
	case 9:
		if ((int)states[4] - 8 >= 0) states[4] = (uint8_t)((int)states[4] - 8);
		display_fifth_row(states[4]);
		break;
	case 10:
		if ((int)states[4] - 4 >= 0) states[4] = (uint8_t)((int)states[4] - 4);
		display_fifth_row(states[4]);
		break;
	case 11:
		if ((int)states[4] - 2 >= 0) states[4] = (uint8_t)((int)states[4] - 2);
		display_fifth_row(states[4]);
		break;
	}

}
void clearAllClock(){
	HAL_GPIO_WritePin(_6_GPIO_Port , _6_Pin , 1) ;
	HAL_GPIO_WritePin(_7_GPIO_Port , _7_Pin , 1) ;
	HAL_GPIO_WritePin(_8_GPIO_Port , _8_Pin , 1) ;
	HAL_GPIO_WritePin(_9_GPIO_Port , _9_Pin , 1) ;
	HAL_GPIO_WritePin(_10_GPIO_Port , _10_Pin , 1) ;
	HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 0) ;
	HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 0) ;
	HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 0) ;
	HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 0) ;
	HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 0) ;
	HAL_Delay(1000);
}
