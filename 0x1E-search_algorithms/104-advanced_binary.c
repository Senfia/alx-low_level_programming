#include "search_algos.h"


/**
 * print_array_rec - print part of array
 * @array: array of intiger
 * @size: size of array
 */
void print_array_rec(int *array, size_t size)
{
	if (size > 0)
	{
		printf(" %d,", *array);
		print_array_rec(array + 1, size - 1);
	}
	else if (size == 0)
	{
		printf(" %d\n", *array);
	}
}

/**
 * helper - print binary recursively
 * @array: pointer to array
 * @lo: lower index to consider
 * @hi: higher index to consider
 * @value: value to search
 * Return: index of where value appears or -1
 */
int helper(int *array, size_t lo, size_t hi, int value)
{
	size_t middle;

	if (lo >= hi)
	{
		if (array[lo] == value)
			return (lo);
		printf("Searching in array:");
		print_array_rec(array + lo, hi - lo);
		return (-1);
	}
	printf("Searching in array:");
	print_array_rec(array + lo, hi - lo);
	middle = lo + (hi - lo) / 2;
	if (array[middle] < value)
		return (helper(array, middle + 1, hi, value));
	return (helper(array, lo, middle, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers.
 * @array: an array of int
 * @size: size of array
 * @value: value to search for
 * Return: index of where value appears in array or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size <= 0)
		return (-1);

	return (helper(array, 0, size - 1, value));
}
