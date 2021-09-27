#include "file_to_str.h"

char *mx_strjoin(char const*s1, char const *s2)
{
    if(s1 == NULL && s2 == NULL)
    {
        return NULL;
    }
    else if(s1 == NULL)
    {
        return mx_strdup(s2);
    }
    else if(s2 == NULL)
    {
        return mx_strdup(s1);
    }
    else 
    {
        int lens = mx_strlen(s1) + mx_strlen(s2);
        char *buf_str1 = mx_strdup(s1);
        char *buf_str2 = mx_strdup(s2);
        char *fin_str = mx_strnew(lens);
        fin_str = mx_strcat(buf_str1, buf_str2);
        return fin_str;    
    }

}











