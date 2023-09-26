#include "sort.h"
#include <stdlib.h>
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
 * bubble_sort - a very simple bubble sort implementation
 * @array: the array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
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
		for (j = 0; j < size - 1 - i; ++j)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);

				print_array(array, size);
			}
		}
	}
}
