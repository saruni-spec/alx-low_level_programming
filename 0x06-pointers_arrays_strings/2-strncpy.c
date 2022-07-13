#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * strncpy - Function to implement `strncpy()` function
 * @num: an int
 * @dest: an input string
 * @src: an input string
 * Return: A pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
if (destination == NULL)
{
return (NULL);
}
char *ptr = dest;
while (*src && n--)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (ptr);
}
