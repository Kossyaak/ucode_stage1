#include <stdlib.h>
int *mx_copy_int_arr(const int *src, int size);
int *mx_copy_int_arr(const int *src, int size)
{
    if (size <= 0 || src == NULL)
    {
        return NULL;
    }
        int *buf = (int *)malloc(size * 4);
        for(int i = 0; i < size; i++)
        {
            buf[i] = src[i];
     
        }
        return buf;
}




