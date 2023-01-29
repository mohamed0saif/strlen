/*

 * main.c
 *
 *  Created on: Jan 29, 2023
 *      Author: mohamed
 */
#include "stdio.h"
#include "string.h"
void clear (void);

void main (){
	char string[100];
	int counter=0 ,i=0 ;
	printf("enter a string: ");
	clear();
	gets(string);
	while(string[i] != '\0'){
		counter++;
		i++;
	}
	printf("length of string :%d ",counter);

}

void clear (void){
	fflush(stdin);
	fflush(stdout);
}
