#include "sort.h"
/**
 * selection_sort - sorts an array of int using Selection sort
 * @array: array of int
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j, min, tmp = 0;

	if (!array || size < 2)
	{
		return;
	}

	for (; i < size - 1; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}

		if (min != i)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
