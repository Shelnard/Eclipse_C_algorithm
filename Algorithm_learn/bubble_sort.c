#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

/*
 * ð������
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
 * ��������
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


int main(void){
	int i, array[10];
	printf("Origin array: ");
	for(i = 0; i < 10; i++){
		array[i] = rand()%10;
		printf("%01d ", array[i]);
	}
	printf("\n");

	//bubble_sort(array, 10);
	fast_sort(array, 0, 9);

	printf("Sorted array: ");
	for(i = 0; i < 10; i++){
		printf("%01d ", array[i]);
	}

	return 0;
}
