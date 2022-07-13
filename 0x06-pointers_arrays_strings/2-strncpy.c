#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * Function to implement `strncpy()` function
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */

char* strncpy(char* destination, const char* source, size_t num)
{
if (destination == NULL) 
{
return NULL;
}
char* ptr = destination;
while (*source && num--)
{
*destination = *source;
destination++;
source++;
}
*destination = '\0';
return ptr;
}
 
