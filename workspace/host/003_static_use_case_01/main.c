/*
 * main.c
 *
 *  Created on: 1 Jun 2020
 *      Author: atulsharma
 */


#include<stdio.h>

void file1_fun(void);
static void change_system_clock(int system_clock);


//static will make the variable private to this file
static int private_data;

int main(){
	private_data = 100;

	printf("private_data: %d\n", private_data);

	file1_fun();

	change_system_clock(10);
	return 0;
}

//static will make the function private to this file
static void change_system_clock(int system_clock){

	printf("System clock changed to: %d\n", system_clock);

}
