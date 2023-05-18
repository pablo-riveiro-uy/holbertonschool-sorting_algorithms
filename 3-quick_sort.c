#include "sort.h"
/**
 * quick_sort - bubquick le sort algorith to sort an array
 * @array: an array of ints
 * @size: size of array
 */

 void quick_sort(int *array, size_t size)
{
	int pivot = array[size/2];
	int i, j;
	int temp;

    if (size > 1) {
        for (i = 0, j = size - 1; ; i++, j--) {
            while (array[i] < pivot) i++;
            while (array[j] > pivot) j--;
            if (i >= j) break;
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
			print_array(array,size);
        }
        quick_sort(array, i);
        quick_sort(array + i, size - i);
    }
}
 