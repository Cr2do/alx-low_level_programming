#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 * @h: list value
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{

	size_t count_number = 0;

	while (h != NULL)
	{
		count_number++;
		h = h->next;
	}
	return (count_number);
}
