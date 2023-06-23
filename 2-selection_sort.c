#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 *                       order using the Insertion sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, idx;
	int tmp, chk;

	if (!array || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		idx = i;
		chk = 0;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx])
			{
				idx = j;
				chk = 1;
			}
		}
		tmp = array[i];
		array[i] = array[idx];
		array[idx] = tmp;

		if (chk)
			print_array(array, size);
	}
}
