#include "file_to_str.h"

char *mx_strcat(char *s1, const char *s2) 
{
    
    int size_dst = mx_strlen(s1);
    int size_src = mx_strlen(s2);
    for(int i = size_dst, j = 0; j < size_src; i++, j++)
    {
        s1[i] = s2[j];
    }
   return s1;
}




