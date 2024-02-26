#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout
 * int main(void) - declaring and calling _puts
 * @str: pointer to the string to print
 */
void _puts(char *str);

int main(void)
{
	char str[] = "Hello, world";

	_puts(str);

	return (0);
}
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		++i;
	}
	putchar('\n');
}

