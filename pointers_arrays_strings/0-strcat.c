#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - Concatenates the strings.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
char *dest_original = dest;

while (*dest != '\0')
dest++;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (dest_original);
}
