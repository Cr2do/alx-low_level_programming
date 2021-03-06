#include "lists.h"

/**
 * free_list - free_list
 * @head: pointer to pointer of linked list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;

	while (temp != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
		temp = head;
	}
}
