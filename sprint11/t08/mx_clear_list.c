#include "list.h"

void mx_clear_list(t_list **list) 
{
    if (*list == NULL) 
    {
        return;
    } 
    t_list *temp;
    while (*list) 
    {
        temp = (*list) -> next;
        (*list) -> next = NULL;
        free(*list);
        *list = temp;
    }
}



