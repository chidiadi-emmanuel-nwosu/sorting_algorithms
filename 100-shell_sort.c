#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending
 *              order using the Shell sort algorithm,
 *              using Knuth sequence
 * @array: array to be sorted
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t n, o, i;

	if (!array || size < 2)
		return;

	for (n = 1; n < size / 3; n = n * 3 + 1)
		;

	while (n > 0)
	{
		for (o = n; o < size; o++)
		{
			int insert;

			insert = array[o];

			i = o;
			while (i > n - 1 && array[i - n] >= insert)
			{
				array[i] = array[i - n];
				i -= n;
			}

			array[i] = insert;
		}
		n = (n - 1) / 3;
		print_array(array, size);
	}
}
