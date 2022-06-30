#include <stdio.h>
#include <stdlib.h>

/**
 * main - print tp stderr
 * Return: Always 1 
 */
int main(void)
{
write(STDOUT_FILENO, "and that piece of art is useful
\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
