#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;

for (number = 0; number < 90; number++)
{
if (number <= 9)
{
putchar('0');
}
if (number != 10)
{
putchar(number + '0');
}
putchar(',');
putchar(' ');
}
putchar('\n');

return (0);
}
