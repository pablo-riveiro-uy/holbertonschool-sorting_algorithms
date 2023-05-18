#include "sort.h"

/**
 * quick_sort - quicksort algorithm
 * @array: an array of ints
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	quick_sort_recursion(array, 0, size - 1, size);
}

int is_sorted(int *array, size_t size)
{
      size_t i = 0;
      
      for (i = 0; i < size - 1; i++) 
      {
            if (array[i] > array[i + 1]) 
            {
                  return (1);
            }
      }
      return (0);
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
			if (i != j)
			{
			swap(&array[j], &array[i]);
			print_array(array, size);
			}
		}
	}
   	swap(&array[i + 1], &array[high]);

	return (i + 1);
}
