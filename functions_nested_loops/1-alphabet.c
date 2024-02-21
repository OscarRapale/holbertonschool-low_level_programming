#include "main.h"

/**
 * main-Print the alphabet
 *
 * Return: Always 0 (success)
 */


void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;

	}
	_putchar ('\n');

}
