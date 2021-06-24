#include <stdio.h>
/**
* main - check the code for Holberton School students.
*
* Return: Always.
*/
int main(void)
{
int num = 0;
int multipleoffive;
int multipleofthree;

for (num = 1; num <= 100; num++)
{
multipleoffive = num % 5 == 0;
multipleofthree = num % 3 == 0;
if (multipleoffive && multipleofthree)
{
printf("FizzBuzz");
printf(" ");
}
else if (num == 100)
{
printf("Buzz");
}
else if (multipleoffive)
{
printf("Buzz");
printf(" ");
}
else if (multipleofthree)
{
printf("Fizz");
printf(" ");
}
else
{
printf("%i", num);
printf(" ");
}
}
printf("\n");
return (0);
}
