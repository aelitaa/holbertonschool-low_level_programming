#include "main.h"
#include <string.h>
/**
 * print_array - outputs second half of string
 *
 * @a: The array to print.
 * @n: Size of array.
 */
void print_array(int *a, int n)
{
int length = sizeof(a) / sizeof(a[0]);
int i;
for (i = 0 ; i < length; i++)
{
  if(i < length - 1)
    {
      printf("%d, ", a[i]);
    }else
    {
      printf("%d\n", a[i]);
    }
}

 return (0);
}
