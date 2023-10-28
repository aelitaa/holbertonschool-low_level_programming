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
int start = length / 2 ;
if ( length % 2 != 0 )
{
     start++;
}
for (i = start ; i < length; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
