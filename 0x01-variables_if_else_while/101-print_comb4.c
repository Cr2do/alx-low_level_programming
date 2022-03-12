#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;

int cents;
int tens;
int unit;


for (number = 1; number < 900; number++)
{
cents = number / 100;
tens = (number / 10) % 10;
unit = number % 10;
if (cents < tens && tens < unit)
{
putchar(cents + '0');
putchar(tens + '0');
putchar(unit + '0');
if (number < 789)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
