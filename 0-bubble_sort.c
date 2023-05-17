#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	int i, j, tempNum;
	for (i  = 0; i < size; i++)
	{
		for (j = 0; j < n - i -1; j++)
		{
			if (arra[j] > aray[j + 1])
			{
				tempNum = array[j];
				array[j] = array[j + 1]
				array[j + 1] = tempNum;
			}
		}
	}
}
