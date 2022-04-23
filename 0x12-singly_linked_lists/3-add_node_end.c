#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to pointer of linked list
 * @str: pointer to array
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t i;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	new_node->str = str;
	new_node->len = i;
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
