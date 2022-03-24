#include "main.h"

/**
 * _puts -  swap two value
 * @str: a string
 * Return: int
 */
void _puts(char *str)
{

int i = 0;

while (str[i] != '\0')
{
_putchar(str[i] + '0');
i++;
}
_putchar('\n');

}
