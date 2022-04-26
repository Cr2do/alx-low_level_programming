#include "lists.h"

/**
 * print_listint - that prints all the elements of a
 * @h: list value
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{

	size_t count_number = 0;

	while (h != NULL)
	{
		count_number++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count_number);
}
