#include <stdio.h>

/**
 * main-Printing alphabet lowercase and uppercase
 * Return: 0
 */

int main(void)
{
	char letter, LETTER;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (LETTER = 'A'; LETTER <= 'Z'; LETTER++)
		putchar(LETTER);

	putchar('\n');

	return (0);

}

