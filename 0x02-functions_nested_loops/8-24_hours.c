#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day, starting from 00:00 to 23:59.
 *
 * Return: no return.
 */
void jack_bauer(void)
{
int hours;
int minutes;
int h1;
int h2;
int m1;
int m2;
for (hours = 0; hours <= 23; hours++)
{
for (minutes = 0; minutes <= 59; minutes++)
{
h1 = hours / 10;
h2 = hours % 10;
m1 = minutes / 10;
m2 = minutes % 10;
_putchar('0' + h1);
_putchar('0' + h2);
_putchar(':');
_putchar('0' + m1);
_putchar('0' + m2);
_putchar('\n');
}
}
}
