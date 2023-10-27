#include "main.h"
#include <string.h>
/**
 * rev_string - outputs a string in reverse.
 *
 * @s: The string to print.
 */
void rev_string(char *s)
{
int length = strlen(s);
int i;

for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n');
_putchar("%s\n", s);
}
