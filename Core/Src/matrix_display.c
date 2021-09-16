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
// represents leds to toggle

void display_first_row(uint8_t b){
	  HAL_GPIO_WritePin(_6_GPIO_Port , _6_Pin , 0) ;
	  if(b & 0x01){
		  HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 1) ;
	  }else{
		  HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 0) ;
	  }
	  if(b & 0x02){
		  HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 1) ;
	  }else{
		  HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 0) ;
	  }
	  if(b & 0x04){
		  HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 1) ;
	  }else{
		  HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 0) ;
	  }
	  if(b & 0x08){
		  HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 1) ;
	  }else{
		  HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 0) ;
	  }
	  if(b & 0x10){
		  HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 1) ;
	  }else{
		  HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 0) ;
	  }
	  HAL_Delay(DELAY_TIME) ;
	  HAL_GPIO_WritePin(_6_GPIO_Port , _6_Pin , 1) ;
}
void display_second_row(uint8_t b){
	 HAL_GPIO_WritePin(_7_GPIO_Port , _7_Pin , 0) ;
		  if(b & 0x01){
			  HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 1) ;
		  }else{
			  HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 0) ;
		  }
		  if(b & 0x02){
			  HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 1) ;
		  }else{
			  HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 0) ;
		  }
		  if(b & 0x04){
			  HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 1) ;
		  }else{
			  HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 0) ;
		  }
		  if(b & 0x08){
			  HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 1) ;
		  }else{
			  HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 0) ;
		  }
		  if(b & 0x10){
			  HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 1) ;
		  }else{
			  HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 0) ;
		  }
		  HAL_Delay(DELAY_TIME) ;
		  HAL_GPIO_WritePin(_7_GPIO_Port , _7_Pin , 1) ;
}
void display_third_row(uint8_t b){
	 HAL_GPIO_WritePin(_8_GPIO_Port , _8_Pin , 0) ;
		  if(b & 0x01){
			  HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 1) ;
		  }else{
			  HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 0) ;
		  }
		  if(b & 0x02){
			  HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 1) ;
		  }else{
			  HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 0) ;
		  }
		  if(b & 0x04){
			  HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 1) ;
		  }else{
			  HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 0) ;
		  }
		  if(b & 0x08){
			  HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 1) ;
		  }else{
			  HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 0) ;
		  }
		  if(b & 0x10){
			  HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 1) ;
		  }else{
			  HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 0) ;
		  }
		  HAL_Delay(DELAY_TIME) ;
		  HAL_GPIO_WritePin(_8_GPIO_Port , _8_Pin , 1) ;
}
void display_fourth_row(uint8_t b){
	 HAL_GPIO_WritePin(_9_GPIO_Port , _9_Pin , 0) ;
		  if(b & 0x01){
			  HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 1) ;
		  }else{
			  HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 0) ;
		  }
		  if(b & 0x02){
			  HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 1) ;
		  }else{
			  HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 0) ;
		  }
		  if(b & 0x04){
			  HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 1) ;
		  }else{
			  HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 0) ;
		  }
		  if(b & 0x08){
			  HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 1) ;
		  }else{
			  HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 0) ;
		  }
		  if(b & 0x10){
			  HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 1) ;
		  }else{
			  HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 0) ;
		  }
		  HAL_Delay(DELAY_TIME) ;
		  HAL_GPIO_WritePin(_9_GPIO_Port , _9_Pin , 1) ;
}
void display_fifth_row(uint8_t b){
	 HAL_GPIO_WritePin(_10_GPIO_Port , _10_Pin , 0) ;
		  if(b & 0x01){
			  HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 1) ;
		  }else{
			  HAL_GPIO_WritePin(_1_GPIO_Port , _1_Pin , 0) ;
		  }
		  if(b & 0x02){
			  HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 1) ;
		  }else{
			  HAL_GPIO_WritePin(_2_GPIO_Port , _2_Pin , 0) ;
		  }
		  if(b & 0x04){
			  HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 1) ;
		  }else{
			  HAL_GPIO_WritePin(_3_GPIO_Port , _3_Pin , 0) ;
		  }
		  if(b & 0x08){
			  HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 1) ;
		  }else{
			  HAL_GPIO_WritePin(_4_GPIO_Port , _4_Pin , 0) ;
		  }
		  if(b & 0x10){
			  HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 1) ;
		  }else{
			  HAL_GPIO_WritePin(_5_GPIO_Port , _5_Pin , 0) ;
		  }
		  HAL_Delay(DELAY_TIME) ;
		  HAL_GPIO_WritePin(_10_GPIO_Port , _10_Pin , 1) ;
}
