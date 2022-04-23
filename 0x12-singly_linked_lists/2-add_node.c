#include "lists.h"

/**
 * add_node - add_node to begin of list
 * @head: pointer to pointer of linked list
 * @str: pointer to array
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
		;

	new_node->str = str;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
