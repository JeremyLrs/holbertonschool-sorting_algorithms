#include "sort.h"
/**
 * selection_sort - function that sorts an array
 * of integers in ascending order using
 * the Selection sort algorithm
 *
 * @array: it's array to sort
 * @size: it's size of array
 *
 * Return: ;
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, array_size_min;
	int temp = 0;

	if (size >= 2)
	{
		for (i = 0; i < size; i++)
		{
			array_size_min = i;

			for (j = i; j < size; j++)
			{
				if (array[j] < array[array_size_min])
					array_size_min = j;
			}
			if (array_size_min != i)
			{
				temp = array[i];
				array[i] = array[array_size_min];
				array[array_size_min] = temp;

				print_array(array, size);
			}
		}
	}
}
