#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t i, j, tempNum;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tempNum = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tempNum;
			}
		}
	}
}
