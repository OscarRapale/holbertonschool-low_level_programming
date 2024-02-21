#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for (i = 10; i < 99; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(',');
	}

	putchar('\n');
	return (0);
}
