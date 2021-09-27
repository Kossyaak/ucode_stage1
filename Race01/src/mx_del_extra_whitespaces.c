#include "header.h"
char *mx_del_extra_whitespaces(const char *str) 
{
    char *arr = mx_strtrim(str);
    int size_src = 0; 
    int size_res = 0;
    while (*arr)  
    {
        size_src++;
        arr++;
        if (!mx_isspace(*arr) || (mx_isspace(*arr) && !mx_isspace(*(arr + 1))))
        {
            size_res++;
        }
    }
    arr -= size_src;
    char *res = mx_strnew(size_res);
    
    for(int i = 0, j = 0; i < size_src; i++) 
    {
        if(!mx_isspace(arr[i]) || (mx_isspace(arr[i]) && !mx_isspace(arr[i + 1])))
        {
            res[j++] = arr[i];
        }
    }
    free(arr);
    return res;
    
}










