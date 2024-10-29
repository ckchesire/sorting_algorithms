#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers in ascending
 * order using Bubble sort algorithm.
 * @array: an array of integers
 * @size: size or length of array
 * Return: returns nothing
 */
void bubble_sort(int *array, size_t size)
{
	int tmp = 0;
	size_t i = 0, j = 0;


	while (j < size - 1)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i + 1] < array[i])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
		j++;
	}
}
