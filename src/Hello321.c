/*
 ============================================================================
 Name        : Hello321.c
 Author      : Brent Horine
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(void) {
	int a = 0;
	puts("!!!Hello Embedded Systems!!!"); /* prints !!!Hello Embedded Systems!!! */
	for (int i=0; i<N; i++) {
		a++;
	}
	printf("a is now %i\n", a);
	return EXIT_SUCCESS;
}
