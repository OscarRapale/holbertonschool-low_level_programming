#include <stdio.h>

/**
 * main function
 * Printing alphabets lowercase and uppercase
 * Return: 0
 */

int main(void)
{
  int ch, CH;

  for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	
  for (CH = 'A'; CH <= 'Z'; CH++)
		putchar(CH);
	
  putchar('\n');

  return(0);

}
