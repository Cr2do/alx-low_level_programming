#include "main.h"

/**
 * _puts -  swap two value
 * @str: a string
 * Return: int
 */
void _puts(char *str)
{

int i = 0;
int lgth = _strlen(str);

for (i = 0; i < lgth; i++)
{

_putchar(str[i] + '0');

}
_putchar('\n');

}
