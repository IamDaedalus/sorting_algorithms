#include "sort.h"
#include <stddef.h>

/**
 * swap - swaps two elements
 * @a: the first number
 * @b: the second number
 */
void swap(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - this algorithm searches for the least value and
 * puts it in the front over and over; a reverse bubble sort
 * @array: the array to sort
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t arrlen = 0;
	size_t i = 0, j = 0;

	if (!array || size == 0)
		return;

	while (array[arrlen])
		arrlen++;

	if (size > arrlen)
		return;

	for (i = 0; i < size - 1; ++i)
	{
		size_t min = i;

		for (j = i + 1; j < size; ++j)
		{
			if (array[j] < array[min])
				min = j;
		}

		if (min != i)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
