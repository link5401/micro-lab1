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
#define DELAY_TIME 1000
//NumberOnClock utility
#define MAX_INDEX 12
static uint8_t numOn[MAX_INDEX] =
{
		0x8,
		0x4,
		0x2,
		0x10,
		0x1,
		0x10,
		0x1,
		0x10,
		0x1,
		0x8,
		0x4,
		0x2
};

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
		  HAL_Delay(DELAY_TIME) ;
		  HAL_GPIO_WritePin(_10_GPIO_Port , _10_Pin , 1) ;
}

void setNumberOnClock(int num){
	if(num >= 0 && num <= 2){
		display_first_row(numOn[num]);
	} else if (num == 3 || num == 4){
		display_second_row(numOn[num]);
	} else if (num == 5 || num == 6){
		display_third_row(numOn[num]);
	} else if (num == 7 || num == 8){
		display_fourth_row(numOn[num]);
	} else if (num >= 9 && num <= 11){
		display_fifth_row(numOn[num]);
	} else{
		return;
	}
	HAL_Delay(1000);
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
