#include <stdlib.h>
#include <stdio.h>

/**
 * main function
 * Printing alphabets lowercase
 */

int main(void)
{
  int letter;

  for (letter = 'a'; letter <= 'z'; letter++)
  putchar(letter);
  putchar('\n');

  return(0);

}
