#include "sort.h"

/**
 * quick_sort - quicksort algorithm
 * @array: an array of ints
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{

/* 	if (array == NULL)
		return;

	if (1 == is_same_num(array))
		return;

	if (size < 2)
		return; */
	
	quick_sort_recursion(array, 0, size - 1, size);
}

/**
 * is_same_num - detects if an array is a one number tepetition
 * @array: an array to divide and sort
 *
 * Return: 1 for true 0 for false
 */

int is_same_num(int *array)
{
	int i = 0;
	int is_same = 1;

	while (array[i - 1])
	{
		if (array[i] == array[i + 1])
			is_same = 1;
		else
			is_same = 0;
	}
	return (is_same);

}

/**
 *quick_sort_recursion - make a recursion to execute quick sort algorithm
 * @array: an array of ints
 * @low: the start of the new partition
 * @high: the end of the new partition
 * @size: size of full array
 */

void quick_sort_recursion(int array[], int low, int high, int size)
{

	if (low < high)
	{
	int pivot_index = partition(array, low, high, size);

	quick_sort_recursion(array, low, pivot_index - 1, size);
	quick_sort_recursion(array, pivot_index + 1, high, size);
	}
}

/**
 * swap - swap the value of to variables
 * @a: a value
 * @b: b value
*/

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - divide and conquer sorting function
 * @array: an array to divide and sort
 * @low: start of new partition
 * @high: end of new partition
 * @size: size of full array
 *
 * Return: index of pivot for recursion
 */

int partition(int array[], int low, int high, int size)
{
	int pivot_value = array[high];
	int i = low - 1;
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if  (array[j] < pivot_value)
		{
			i++;
			swap(&array[i], &array[j]);
			if (i != j)
			{
			print_array(array, size);
			}
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(array, size);
	return (i + 1);
}
