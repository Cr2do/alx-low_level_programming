#include "main.h"

/**
 * _isalpha - alphabet checker
 *
 * @c: integer parameter
 *
 * Return: Returns value
 */

int _isalpha(int c)
{
	int value;

	if ((c >= 'A' || c >= 'a') && (c <= 'Z' || c <= 'z'))
	{
		value = 1;
	}
	else
	{
		value = 0;
	}
	return (value);
}
