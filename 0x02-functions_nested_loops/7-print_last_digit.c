#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @number: integer param
 *
 * Return: returns 0
 */

int print_last_digit(int number)
{
	number = number % 10;
	if (number < 0)
	{
		number = -number;
	}
	_putchar(number + '0');
	return (number);
}
