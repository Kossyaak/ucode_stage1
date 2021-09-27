#include <stdlib.h>
#include <stdbool.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_del_dup_arr(int *src, int src_size, int *dst_size) 
{
    if (src == NULL)
    { 
        return NULL;
    }
    int *res = mx_copy_int_arr(src, *dst_size);
    
    int j = 0;
    int flag;
    for (int i = 0; i < src_size; i++) 
    {
        flag = 0;
        for (int k = 0; k < j; k++)
        {
            if (src[i] == res[k])
            {
                flag = 1;
            }
        }
        if (flag == 1) 
        {
            continue;
        }
        res[j++] = src[i];
    }
    return res;
}







