#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @number: integer type parameter
 *
 * Return: returns 0
 */

int _abs(int number)
{
	if (number < 0)
	{
		number = (-1) * number;
	}
	return (number);
}
