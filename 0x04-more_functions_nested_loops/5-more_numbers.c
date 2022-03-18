#include "main.h"

/**
 * print_most_numbers - print 10 times number from 0 to 14
 *
 */
void print_most_numbers(void)
{
int n = 0;
while (n < 10)
{
int i;
for (i = 0; i <= 14 ; ++i)
{
_putchar(i + '0');
}
n++;
}
}
