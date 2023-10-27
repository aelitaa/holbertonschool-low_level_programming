#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - outputs a string in reverse.
 *
 * @s: The string to print.
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
