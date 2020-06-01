/*
 * file1.c
 *
 *  Created on: 1 Jun 2020
 *      Author: atulsharma
 */

//Its declared someplace else
//private_data is static and cannot be referenced
//extern int private_data;

//extern is assumed
//change_system_clock is static and cannot be referenced
//void change_system_clock(int system_clock);

void file1_fun(void){
	//attempting to change global
	//private_data = 900;

	//change_system_clock(0);
}
