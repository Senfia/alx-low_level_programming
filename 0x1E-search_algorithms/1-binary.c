#include "search_algos.h"


/**
 * print_array - print part of an array
 * @array: array
 * @low: min index to print
 * @high: max index to print
 */
void print_array(int *array, size_t lo, size_t hi)
{
	size_t i;

	printf("Searching in array:");
	for (i = lo; i < hi; ++i)
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
	size_t lo, hi, middle;

	if (!array || size <= 0)
		return (-1);

	lo = 0;
	hi = size - 1;
	while (lo <= hi)
	{
		print_array(array, lo, hi);
		middle = lo + (hi - lo) / 2;
		if (array[middle] < value)
			lo = middle + 1;
		else if (array[middle] > value)
			hi = middle;
		else
			return (middle);
	}
	return (-1);
}
