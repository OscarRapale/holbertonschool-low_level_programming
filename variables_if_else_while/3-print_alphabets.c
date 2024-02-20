#include <stdio.h>

/**
 * main function
 * Printing alphabets lowercase and uppercase
 * Return: 0
 */

int main(void)
{
  int letter, LETTER;

  for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

  for (LETTER = 'A'; LETTER <= 'Z'; LETTER++)
		putchar(LETTER);
	
  putchar('\n');

  return(0);

}
