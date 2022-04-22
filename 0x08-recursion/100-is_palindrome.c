#include "main.h"

/**
 * _myStrlen - gets string length
 * @p: string to be counted
 * Return: returns string length
 */
char _custum_strlen(char *p)
{
	if (!*p)
		return (0);
	return (1 + _custum_strlen(p + 1));
}

/**
 * string_iteration - string iterator
 * @s: string params
 * @l: length of string param
 * Return: returns string length
 */
int string_iteration(char *s, int l)
{
	if (l < 1)
		return (1);
	if (*s == *(s + l))
		return (string_iteration(s + 1, l - 2));
	return (0);
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be checked
 * Return: 1 or 0 if palindrome or not palindrome respectively
 */
int is_palindrome(char *s)
{
	int len;

	len = _custum_strlen(s);
	return (string_iteration(s, len - 1));
}
