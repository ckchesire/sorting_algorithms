#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: integer array of numbers to sort
 * @size: size of the array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int min_value_idx = 0, tmp = 0;

	while (i < size)
	{
		min_value_idx = i;
		for (j = i + 1; j < size ; j++)
		{
			if (array[j] < array[min_value_idx])
			{
				min_value_idx = j;
			}
		}
		if (min_value_idx != 1)
		{
			tmp = array[i];
			array[i] = array[min_value_idx];
			array[min_value_idx] = tmp;
			print_array(array, size);
		}
		i++;
	}
}
