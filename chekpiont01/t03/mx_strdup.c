#include <stdlib.h>
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
int mx_strlen(const char *s);

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


char *mx_strcpy(char *dst, const char *src)
{
    int i = 0;
    char endchar = '\0';
    for(; src[i] != endchar;i++)
    {
        dst[i] = src[i];
    }
    dst[i] = '\0';
    return dst;
}

int mx_strlen(const char *s)
{
    int len = 0;
    for(int i = 0; *s++; i++)
    {
        len++;
    }
    return len;
}

char *mx_strnew(const int size)
{
    if(size < 0)
    {
        return NULL;
    }
    char *buf = (char*)malloc(size + 1);
    if(buf == NULL)
    {
        return NULL;
    }
    for(int i = 0; i < size; i++)
    {
        buf[i] = '\0';
    }
    buf[size + 1] = '\0';
    return buf;

}








