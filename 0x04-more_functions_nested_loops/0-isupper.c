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
if ('A' <= c && 'Z' <= c)
{
value = 0;
}
else if ('a' <= c && 'z' <= c)
{
value = 1;
}
return (value);
}
