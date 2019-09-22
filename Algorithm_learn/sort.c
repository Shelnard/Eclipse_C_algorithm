#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

/*
 * Ã°ÅÝÅÅÐò
 */
void bubble_sort(int* array, int len)
{
	int i;

	while(len > 1)
	{
		for(i = 0; i < len - 1; i++)
		{
			if(array[i] > array[i + 1]){
				array[i] = array[i]^array[i + 1];
				array[i+1] = array[i]^array[i + 1];
				array[i] = array[i]^array[i + 1];
			}
		}
		len--;
	}
}
/*
 * ¿ìËÙÅÅÐò
 */
void fast_sort(int* array, int left, int right)
{
	int i, j, key;
	if(left >= right){
		return;
	}

	i = left;
	j = right;
	key = array[left];

	while(i < j)
	{
		while(i < j && key <= array[j]){
			j--;
		}

		array[i] = array[j];

		while(i < j && key >= array[i]){
			i++;
		}

		array[j] = array[i];
	}

	array[i] = key;
	fast_sort(array, left, i - 1);
	fast_sort(array, i + 1, right);
}



