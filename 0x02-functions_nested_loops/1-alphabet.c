#include "holberton.h"
/**
* print_alphabet - prints alphabet in lowercase
* @void: no argument
**/
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
