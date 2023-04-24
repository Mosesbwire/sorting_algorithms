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


	for (i = 0; i < size - 3; i++)
	{
		smallest = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[smallest] > array[j])
			{
				smallest = j;
			}
		}
		tmp = array[smallest];
		array[smallest] = array[i];
		array[i] = tmp;
		print_array(array, size);
	}
}

