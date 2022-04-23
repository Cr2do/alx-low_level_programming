#include "lists.h"
#include <unistd.h>


/**
 * print_list - print_list
 * @h: pointer to list
 * Return: the number of elements in h plus specifics values
 */
size_t print_list(const list_t *h)
{
	
	size_t i;

	i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);

}
