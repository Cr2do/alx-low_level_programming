#include "lists.h"
#include <unistd.h>


size_t print_list(const list_t *h)
{
    char *is_null = "[0] (nil)";

    int i = 0;
    

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
