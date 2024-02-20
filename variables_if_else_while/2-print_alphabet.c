#include <stdio.h>

/**
 * main function
 * Printing alphabets lowercase
 */

int main(void)
{
  char letter[26] = "abcdefghijklmnopqrstuvwxyz";
  int i;

  for (i = 0; i < 26; i++)
  {
		  putchar(letter[i]);
  } 
  putchar('\n');

  return(0);

}
