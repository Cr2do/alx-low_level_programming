#include "main.h"

/**
 * swap_int -  swap two value
 * @a: a value
 * @b: b value
 */
void swap_int(int *a, int *b)
{

int tmp;
tmp = *b;
*b = *a;
*a = tmp;

}
