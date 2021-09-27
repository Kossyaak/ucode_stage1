#include "file_to_str.h"

char *mx_strcat(char *s1, const char *s2) 
{
    int src_l = mx_strlen(s2);
    int dst_l = mx_strlen(s1);
    for (int i = 0; i < src_l + 1; i++) 
    {
        s1[dst_l + i] = s2[i];
    }
  return (char *)s1;
}



