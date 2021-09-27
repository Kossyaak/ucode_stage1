#include "create_new_agents.h"
char *mx_strnew(const int size);


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

