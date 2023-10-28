#include "main.h"
#include <string.h>
/**
 * puts2 - outputs only every other character of string
 *
 * @str: The string to print.
 */
void puts2(char *str)
{
int length = strlen(str);
int i;

for (i = 0; i < length; i+=2)
{
_putchar(str[i]);
}

_putchar('\n');
}
