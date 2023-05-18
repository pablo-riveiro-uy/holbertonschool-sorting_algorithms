#include "sort.h"
/**
 * quick_sort - bubquick le sort algorith to sort an array
 * @array: an array of ints
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	quick_sort_recursion(array, 0, size - 1, size);
}

void quick_sort_recursion(int array[], int low, int high, int size)
{

	if (low < high)
	{
	int pivot_index = partition(array, low, high);

	quick_sort_recursion(array, low, pivot_index - 1, size);
	print_array(array, size);
	quick_sort_recursion(array, pivot_index + 1, high, size);
	}
}


void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int array[], int low, int high)
{
	int pivot_value = array[high];
	int i = low;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot_value)
		{
			swap(&array[i], &array[j]);
			i++;
		}
	}
	swap(&array[i], &array[high]);
	return (i);
}

 