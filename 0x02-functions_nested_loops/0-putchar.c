#include <stdlib.h>
#include "main.h"

/**
 * main - Print putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char nm[12] = "_putchar\n";
_putchar(nm[0]);
_putchar(nm[1]);
_putchar(nm[2]);
_putchar(nm[3]);
_putchar(nm[4]);
_putchar(nm[5]);
_putchar(nm[6]);
_putchar(nm[7]);
_putchar(nm[8]);
_putchar(nm[9]+nm[10]);

return (0);
}
