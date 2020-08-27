#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search algorithm for arrays.
 * @array: A pointer to inputed array.
 * @size: The size of array.
 * @value: The value to search for.
 * Return: The index of the value into the array.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, b = 0, step = 0;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	while (array[b] < value && b < size)
	{
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
		a = b;
		b += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", a, b);

	if (b >= size)
		b = size - 1;

	while (array[a] < value && a < b)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a++;
	}
	printf("Value checked array[%ld] = [%d]\n", a, array[a]);

	if (array[a] == value)
		return (a);

	return (-1);
}