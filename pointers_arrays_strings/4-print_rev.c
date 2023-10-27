#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - outputs a string in reverse.
 *
 * @s: The string to print.
 */
void print_rev(char *s)
{
  int length = strlen(s)
    for (int i = length - 1 ; i >= 0 ; i--)
      {
       printf("%c\n", s[i]);
      }
}
