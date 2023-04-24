#include "sort.h"

/**
 * selection_sort - sort array using selection sort algorithm
 * @array: array to sort
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int smallest, tmp;


	for (i = 0; i < size; i++)
	{
		smallest = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (smallest > array[j])
			{
				tmp = array[j];
				array[j] = smallest;
				smallest = tmp;
				print_array(array, size);
			}
		}
		array[i] = smallest;
	}
}

