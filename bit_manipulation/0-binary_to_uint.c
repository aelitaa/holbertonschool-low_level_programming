#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - get length of string
 *
 * @str: string
 * Return: length
 */

int _strlen(const char *str)
{
	int count = 0;

	while (*str != '\0')
	{
	count++;
	str++;
	}

return (count);
}

/**
 * binary_to_uint - converts binary to unsigned int
 *
 * @b: string of chars containing binary value
 * Return: the unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
if (b != NULL)
	{
	int count = 0;
		unsigned int result = 0;
		int len = _strlen(b);

		for (count = 0; count < len; count++)
		{
			if (b[count] != '0' && b[count] != '1')
			{
			 return (0);
			}
		result = result << 1;
		result = result | (b[count] - '0');
		}

		return (result);

	}
	else
	{
		return (0);
	}
}
