#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    size_t len;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL )
    {
        return NULL;        
    }
        
    for (len = 0; str[len] != '\0'; len++)
        ;
            
    new_node->str = str;
    new_node->len = strlen(str);
    new_node->next = *head;
    *head = new_node;

    return (*head);
}