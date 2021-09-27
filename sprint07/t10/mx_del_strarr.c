#include <stdlib.h>

void mx_strdel(char **str);

void mx_del_strarr(char ***arr) 
{
    char **buf = *arr;
    while (*buf) 
    {
        free(buf++);
    }
    mx_strdel(*arr);
}
