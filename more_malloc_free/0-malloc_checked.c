#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: is the size.
 * Return: A pointer.
 */

void *malloc_checked(unsigned int b)
{
void *m;
m = malloc(b);
if (m == NULL)
exit(98);

return (m);
}
