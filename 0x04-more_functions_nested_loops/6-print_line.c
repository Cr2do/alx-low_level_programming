#include "main.h"

/**
 * print_line -  function that draws a straight line in the terminal.
 *@n: number
 */
void print_line(int n);
{
if (n == 0 || n < 0)
{
_putchar('\n');
}
else
{
while (--n)
{
_putchar('_');
}
_putchar('\n');
}


}
