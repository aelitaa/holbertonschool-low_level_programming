#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - copies from src to dest
 *
 * @dest: Copied to.
 * @src: Copied from.
 */
char *_strcpy(char *dest, char *src) {
    char *dest_start = dest; 
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return dest_start;
}
