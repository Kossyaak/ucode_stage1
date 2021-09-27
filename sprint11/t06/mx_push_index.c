#include "list.h"

void mx_push_index(t_list **list, void *data, int index)
{
    if(*list == NULL)
    {
        *list = mx_create_node(data);
        return;
    }
    if(index < 1)
    {
        mx_push_front(list, data);
        return;
    }
    int count = 0;
    t_list *counter = *list;
    while(counter)
    {
        counter = counter -> next;
        count++;
    }
    if(index >= count)
    {
        mx_push_back(list, data);
        return;
    }
    t_list *tmp = *list;
    t_list *tmp1 = NULL;
    for(int i = 0; i < index; i++)
    {
        tmp1 = tmp;
        tmp = tmp -> next;
    }
    tmp1 -> next = mx_create_node(data);
    tmp1 -> next -> next = tmp;
}



