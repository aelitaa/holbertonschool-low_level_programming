#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - outputs second half of string
 *
 * @a: The array to print.
 * @n: Size of array.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;

		printf(", ");
	}
	printf("\n");
}
