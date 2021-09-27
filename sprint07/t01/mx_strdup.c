#include <stdlib.h>
char *mx_strcpy(char *dst, const char *src);
void *mx_strnew(const int size);
int mx_strlen(const char *s);
void *mx_strnew(const int size);


char *mx_strdup(const char *str)
{
    if(str == NULL)
    {
        return NULL;
    }
    char *buf = mx_strnew(mx_strlen(str));
    if(buf == NULL)
    {
        return NULL;
    }
    mx_strcpy(buf, str);
    return buf;
}

