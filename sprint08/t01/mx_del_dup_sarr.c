#include "duplicate.h"

t_intarr *mx_del_dup_sarr(t_intarr *src)
{
    int size = src->size;
    int int_size = 4;
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(src->arr[i] == src->arr[j])
            {
                for(int k = j; k < size -1; k++)
                {
                    src->arr[k] = src->arr[k + 1];
                }
                size--;
                if(src->arr[i] == src->arr[j])
                {
                    j--;
                }
            }
        }
    }
    t_intarr buf;
    buf.size = size;
    buf.arr = (int*)malloc(buf.size * int_size);
    buf.arr = mx_copy_arr_int(src->arr, buf.size);
    t_intarr *p = &buf;
    src = NULL;
    return p;    
}




