#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending
 *              order using the Quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	q_sort(array, size, 0, size - 1);
}



/**
 * q_sort - quick_sort helper function
 * @array: array to be sorted
 * @size: size of the array
 * @lo: start of the array
 * @hi: end of the array
 */
void q_sort(int *array, int size, int lo, int hi)
{
	int pivot, start, i;

	if (lo < hi)
	{
		pivot = hi;
		start = lo;
		for (i = lo; i < hi; i++)
		{
			if (array[i] < array[pivot])
			{
				if (i != start)
				{
					swap(&array[i], &array[start]);
					print_array(array, size);
				}
				start++;
			}
		}
		if (start != pivot && array[start] != array[pivot])
		{
			swap(&array[start], &array[pivot]);
			print_array(array, size);
		}
		q_sort(array, size, lo, start - 1);
		q_sort(array, size, start + 1, hi);
	}
}




/**
 * swap - swaps the values of two variables
 * @a: first variable
 * @b: second variable
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
