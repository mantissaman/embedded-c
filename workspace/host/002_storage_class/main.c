/*
 * main.c
 *
 *  Created on: 1 Jun 2020
 *      Author: atulsharma
 */


#include<stdio.h>

void callCount();
void callCount2();

//Its public can be modifed by any one.
//We need a global variable private to fn
int count = 0;

int main() {
	callCount();
	callCount();
	callCount();
	callCount();
	callCount();

	callCount2();
	callCount2();
	callCount2();
	callCount2();
	callCount2();
	return 0;
}

void callCount() {
	count = count + 1;
	printf("Called %d times\n ", count);
}

void callCount2() {
	//Storage calss static
	//global variable private to fn
	static int count2 = 0;
	count2 = count2 + 1;
	int *ptr_count = &count2;
	printf("Called %d times; ", count2);
	printf("Count Stored at: %p\n", ptr_count);
}
