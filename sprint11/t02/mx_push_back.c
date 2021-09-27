#include "list.h"
#include "mx_create_node.c"
void mx_push_back(t_list **list, void *data)
{
    if(*list == NULL)
    {
       *list = mx_create_node(data);
       return;
    }
    t_list *tmp = *list;
    while(tmp -> next)
    {
        tmp = tmp -> next;
    }
    tmp -> next = mx_create_node(data);
}

