#include "search_algos.h"

/**
 * search - search
 * @array: pointer to array
 * @min: min
 * @max: max
 * @value: value
 *
 * Return: Index
 */
int search(int *array, int min, int max, int value)
{
	int mid, i;

	if (min > max)
		return (-1);

	printf("Searching in array: ");
	for (i = min; i < max; i++)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);

	if (min == max && array[max] == value)
		return (max);

	if (min == max && array[max] != value)
		return (-1);

	mid = min + (max - min) / 2;

	if ((mid == min || value != array[mid - 1]) && array[mid] == value)
		return (mid);

	if (array[mid] >= value)
		return (search(array, min, mid, value));
	return (search(array, mid + 1, max, value));
}
/**
 * advanced_binary - searches for a value in a sorted array of integers.
 * @array: pointer to array
 * @size: size of array
 * @value: value
 *
 * Return: index
 */
int advanced_binary(int *array, size_t size, int value)
{

	if (!array || size == 0)
		return (-1);

	return (search(array, 0, size - 1, value));
}
