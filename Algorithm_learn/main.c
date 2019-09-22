/*
 * main.c
 *
 *  Created on: 2019Äê9ÔÂ22ÈÕ
 *      Author: 56283
 */
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

int main(void){
	int i, array[10], temp[10];
	printf("Origin array: ");
	for(i = 0; i < 10; i++){
		array[i] = rand()%10;
		printf("%01d ", array[i]);
	}
	printf("\n");

	//bubble_sort(array, 10);
	//bubble_sort(array, 10);
	merge_sort(array, temp, 0, 9);

	printf("Sorted array: ");
	for(i = 0; i < 10; i++){
		printf("%01d ", array[i]);
	}

	return 0;
}
