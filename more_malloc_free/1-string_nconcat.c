#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @n: The number of bytes to be allocated from s2.
 *
 *
 * Return: A pointer to the allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int index_s2;
int index_s1;
int len_s1;
int len_s2;

if (s1 == NULL || s2 == NULL)
{
if (s1 == NULL)
{
s1 = " ";
}else if (s2 == NULL)
{
s2 = " ";
}
}
for (index_s2 = 0; s2(index_s2); index_s2++)
{
len_s2++;
}
if (n >= len_s2)
{
n = len_s2;
}
for (index_s1 = 0; s1[index_s1]; index_s1++)
len_s1++;
m = malloc(sizeof(char)*(len_s1+n+1));
if (m == NULL)
return (NULL);
for (index_s2 = 0; index_s2 <= n; index_s2++)
{
m[len_s1] = m[index_s2]
}
return (m);
}
