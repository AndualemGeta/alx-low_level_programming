#include "holberton.h"
/**
* print_alphabet_x10 - prints the alphabet in lowercase 10 times
* @void - no argument
*/
void print_alphabet_x10(void)
{
char letter;
int i;
for (i = 1; i <= 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
}
