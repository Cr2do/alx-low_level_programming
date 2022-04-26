#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * of a listint_t list.
 * @n: list value
 * @head: list head
 * Return: size_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list_t;

	list_t = malloc(sizeof(listint_t));

	if (list_t == NULL)
	{
		return (NULL);
	}
	list_t->n =  n;
	list_t->next = *head;
	*head = list_t;
	return (*head);
}
