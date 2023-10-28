#include "main.h"
#include <string.h>
/**
 * puts_half - outputs second half of string
 *
 * @str: The string to print.
 */
void puts_half(char *str)
{
int length = strlen(str);
int i;
for (i = ( length - 1 ) / 2 ; i < length; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
