#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer.
 * @str: The array to be copied.
 *
 * Return: If str == NULL or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
char *_strdup(char *str)
{
char *s;
int a,b;

if (str == NULL)
{
return (NULL);
}
for (a = 0; str[a]; a++)
a++;
s=malloc(sizeof(char)*a);
if (s == NULL)
return (NULL);
for (b = 0; b < a; b++)
{
s[b]=str[b];
}
return s;
}
