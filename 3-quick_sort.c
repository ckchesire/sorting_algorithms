#include "sort.h"
/**
 * quick_sort - function to sort an array of integers in ascending order
 * @array: an array of integers
 * @size: size of array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{

	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}

/**
 * quick_sort_recursive - recursive function to sort an array
 * @array: array of integers to sort
 * @start: start of the array index
 * @end: end of the array index
 * @size: size of the whol array
 */
void quick_sort_recursive(int *array, int start, int end, size_t size)
{
	int pivot;

	if (start >= end || start < 0)
		return;

	pivot = partition(array, start, end, size);
	quick_sort_recursive(array, start, pivot - 1, size);
	quick_sort_recursive(array, pivot + 1, end, size);
}

/**
 * partition - function to partition the array
 * @array: array of intergers to be sorted
 * @start: start of the array
 * @size: size of the whole array
 * @end: end of the array
 * Return: returns the position of i
 */
int partition(int *array, int start, int end, size_t size)
{
	int pivot = array[end];
	int i = start - 1, j = start;
	int tmp;

	while (j <= end - 1)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
		j++;
	}
	i++;
	if (i != end)
	{
		tmp = array[i];
		array[i] = array[end];
		array[end] = tmp;
		print_array(array, size);
	}

	return (i);
}
