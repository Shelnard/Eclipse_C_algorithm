#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

/*
 * √∞≈›≈≈–Ú
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
 * øÏÀŸ≈≈–Ú
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

/*
 * πÈ≤¢≈≈–Ú
 */
void merge(int* array, int* temp, int startIndex, int midIndex, int endIndex)
{
	int i = startIndex, j = midIndex+1, k = startIndex;

	while(i != midIndex+1 && j != endIndex+1)
	{
		if(array[i] < array[j])
			temp[k++] = array[i++];
		else
			temp[k++] = array[j++];
	}

	while(i != midIndex+1)	temp[k++] = array[i++];
	while(j != endIndex+1)	temp[k++] = array[j++];
	for(i = startIndex; i <= endIndex; i++)
		array[i] = temp[i];
}

void merge_sort(int* array, int* temp, int startIndex, int endIndex)
{
	int midIndex;
	if(startIndex < endIndex)
	{
		midIndex = startIndex + (endIndex - startIndex)/2;
		merge_sort(array, temp, startIndex, midIndex);
		merge_sort(array, temp, midIndex + 1, endIndex);
		merge(array, temp, startIndex, midIndex, endIndex);
	}
}


