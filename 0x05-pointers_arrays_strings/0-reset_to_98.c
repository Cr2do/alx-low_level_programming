#include "main.h"

/**
 * reset_to_98 - return 98
 * @n: pointer
 */
void reset_to_98(int *n)
{
int ten;
int cent;
*n = 98;
ten = *n / 10;
cent = *n % 10;
_putchar(ten + '0');
_putchar(cent + '0');

}
