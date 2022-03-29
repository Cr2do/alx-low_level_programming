#include "main.h"

/**
 * _puts -  swap two value
 * @str: a string
 * Return: int
 */
void _puts(char *str)
{

int i;

for (i = 0; *str != '\0'; str++)
_putchar(*(str + i));

_putchar('\n');

}
