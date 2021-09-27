#include "nbr_to_hex.h" 
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















