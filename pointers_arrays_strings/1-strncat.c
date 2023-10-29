#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - Concatenates the strings.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int index;
char *dest_original = dest;

while (*dest != '\0')
dest++;
for (index = 0; index < n; index++)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (dest_original);
}
