#include <unistd.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints the word Holberton, followed by a new line.
 * Return: 0.
 */
int main(void)
{
char word[9] = "Holberton";
int i;
for (i = 0; i < 9; i++)
{
putchar(word[i]);
}
putchar('\n');
return (0);
}