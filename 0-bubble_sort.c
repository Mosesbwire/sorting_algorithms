#include "sort.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * bubble_sort - sorts an array using bubble sort algorithm
 * @array: array to sort
 * @size: length of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, end;
	int tmp_value;

	end = size - 1;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < end; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp_value = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp_value;
				print_array(array, size);
			}
		}
	}
}

