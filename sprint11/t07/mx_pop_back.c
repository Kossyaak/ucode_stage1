#include "list.h"
void mx_pop_back(t_list **list)
{
    if (*list == NULL) 
    {
        return;   
    }
    t_list *tmp = *list;
    while(tmp -> next -> next)
    {
        tmp = tmp -> next;
    }
    free(tmp -> next);
    tmp -> next = NULL;
    tmp = NULL;
}



