#include "list.h"

void mx_pop_front(t_list **list)
{
    if(*list == NULL)
    {
        return;
    }
    t_list *tmp = *list;
    *list = tmp -> next;
    free(tmp);
    tmp = NULL;
}




