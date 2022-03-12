#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;

int tens;
int unit;

for (number = 1; number < 90; number++)
{
tens = number / 10;
unit = number % 10;
if (tens < unit)
{
putchar(tens + '0');
putchar(unit + '0');
if (number < 89)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
