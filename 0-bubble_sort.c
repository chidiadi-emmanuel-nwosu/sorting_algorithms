#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 *                using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i;

	if (!array || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		unsigned int j, tmp, check = 0;

		for (j = 0; j < size; j++)
		{
			if (j + 1 < size && array[j] > array[j + 1])
			{
				check = 1;
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
		if (!check)
			return;
	}
}
