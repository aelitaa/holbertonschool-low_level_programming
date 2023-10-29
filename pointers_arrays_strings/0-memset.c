#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - Fills the first n byte.
 *
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	
	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
