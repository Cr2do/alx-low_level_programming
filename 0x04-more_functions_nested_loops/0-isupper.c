#include "main.h"

/**
 * _isupper -  upper checker
 *
 * @c: integer parameter c
 *
 * Return: returns value 0 or 1
 */
int _isupper(int c)
{
int value;
if ('A' <= c &&  c <= 'Z')
{
value = 1;
}
else
{
value = 0;
}
return (value);
}
