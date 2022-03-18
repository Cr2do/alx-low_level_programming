#include "main.h"

/**
 * _isdigit -  digit checker
 *
 * @c: integer parameter c
 *
 * Return: returns value 0 or 1
 */
int _isdigit(int c)
{
int value;
if ('0' <= c &&  c <= '9')
{
value = 1;
}
else
{
value = 0;
}
return (value);
}
