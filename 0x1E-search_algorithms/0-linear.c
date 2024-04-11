#include "search_algos.h"
/**
 * linear_search - this will search linear form in array for element
 * @array: reps the array list
 * @size: reps the size of the array
 * @value: reps the value of the array
 *
 * Return: this will return index where user looks for
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	} return (-1);
}
