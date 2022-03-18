#include "main.h"

/**
 * _isupper -  upper checker
 *
 * @c: integer parameter c
 *
 * Return: returns value
 */
int _isupper(int c)
{
if ('A' < c && 'Z' < c)
{
return (0);
}
else if ('a' < c && 'z' < c)
{
return (1);
}
}
