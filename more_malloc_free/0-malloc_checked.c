#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * 
 */

void *malloc_checked(unsigned int b)
{
int *m;
m = malloc( sizeof(int) * b )
if ( m = NULL)
exit(98);

return(m);
}
