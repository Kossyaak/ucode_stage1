#include "file_to_str.h"
char *mx_strcpy(char *dst, const char *src)
{
    int i = 0;
    char endchar = '\0';
    for(; src[i] != endchar;i++)
    {
        dst[i] = src[i];
    }
    dst[i + 1] = '\0';
    return dst;
}






