/*
 * sort.h
 *
 *  Created on: 2019Äê9ÔÂ22ÈÕ
 *      Author: 56283
 */

#ifndef _SORT_H_
#define _SORT_H_

void bubble_sort(int* array, int len);
void fast_sort(int* array, int left, int right);
void merge(int* array, int* temp, int startIndex, int midIndex, int endIndex);
void merge_sort(int* array, int* temp, int startIndex, int endIndex);

#endif /* INCLUDE_SORT_H_ */
