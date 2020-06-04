/*
 * main.c
 *
 *  Created on: 4 Jun 2020
 *      Author: atulsharma
 */


#include<stdio.h>
#include "math.h"

void casting(){
	unsigned char data = (unsigned char)(0x87 + 0xFF01);
	float result = 80/3;

	printf("Data: %X result: %f\n", data, result);

}

int main(){

	printf("Add: %X + %X = %X\n", 0xFFF111, 0xFFF111, math_add(0xFFF111, 0xFFF111));
	printf("Multiply: %X * %X = %X\n", 0xFFF111, 0xFFF111, math_mul(0xFFF111, 0xFFF111));
	printf("Subtract: %d - %d = %d\n", 0xFFF111, 0xFFF111, math_sub(0xFFF111, 0xFFF111));

	printf("Divide: %d / %d = %f\n", 100, 8, math_div(100, 8));
	casting();
}
