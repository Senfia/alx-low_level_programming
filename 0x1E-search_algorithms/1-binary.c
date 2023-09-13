#include "search_algos.h"

/**
 * print_array - print part of an array
 * @array: array to be
 * @low: minimum index to print
 * @high: maximum index to print
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searchighng in array:");
	for (i = low; i < high; ++i)
	{
		printf(" %d,", array[i]);
	}
	printf(" %d\n", array[i]);
}


/**
 * binary_search - searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value to search for
 * Return: index of where value appears in array or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, middle;

	if (!array || size <= 0)
		return (-1);

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		print_array(array, low, high);
		middle = low + (high - low) / 2;
		if (array[middle] < value)
			low = middle + 1;
		else if (array[middle] > value)
			high = middle;
		else
			return (middle);
	}
	return (-1);
}
