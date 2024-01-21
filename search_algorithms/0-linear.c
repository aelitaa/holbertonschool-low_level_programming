#include "search_algos.h"
/**
 * linear_search - performs linear search over a given array
 * @array: given array
 * @size: array size
 * @value: value to search
 * Return: index of value if it's found otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	int elem, result = -1;

	if (array == NULL)
		return (-1);

	for (elem = 0; elem < (int)size; elem++)
	{
		printf("Value checked array[%d] = [%d]\n", elem, array[elem]);
		if (array[elem] == value)
		{
			result = elem;
			break;
		}
	}
	return (result);
}
