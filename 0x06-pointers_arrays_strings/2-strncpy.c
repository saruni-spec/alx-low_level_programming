#include "main.h"
<<<<<<< HEAD

=======
>>>>>>> 8a19de683009727cfb00b761fe17e73ee7ee2496
/**
 * _strncpy - Entry point
 * @dest: char pinter
 * @src: char pointer
 * @n: integer
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
