#include <stdlib.h>
#include <stdbool.h>
void mx_strdel(char **str);
char *mx_strtrim(const char*str);
bool mx_isspace(char c);
void *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);

char *mx_strtrim(const char*str)
{
    
    if (str == NULL)
    { 
        return NULL;
    }
    int size = 0; 
    int left = 0; 
    int right = 0;

    for(;*str;) 
    {
        size++;
        str++;
    }
    str -= size;

    for(;*str && mx_isspace(*str);) 
    {
        str++;
        left++;
    }
    str -= left;
    
    for (int i = size - 1; i >= left; i--) 
    {
        if(mx_isspace(str[i]) == 0) 
        {
            break;
        }
        right++;
    }
    
    char *arr = mx_strnew(size - left - right);
    
    for (int i = left, j = 0; i <= size - 1 - right; i++, j++)
    { 
        arr[j] = str[i];
    }    
    return arr;
    
}







