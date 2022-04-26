#include "lists.h"

size_t print_listint(const listint_t *h)
{

    size_t count_number = 0;

    while ( h != NULL)
    {
        count_number++;
        printf("%d\n",h->n);
        h = h->next;
    }
    printf("-> %lu elements",count_number);

}
