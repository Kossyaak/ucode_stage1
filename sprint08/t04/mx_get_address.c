#include "get_address.h"
char *mx_get_address(void *p) 
{
    unsigned long buf = (unsigned long)p;
    char *tmp = mx_nbr_to_hex(buf);
    char *fin = mx_strnew(mx_strlen(tmp) + 2);
    fin[0] = '0'; fin[1] = 'x';
    fin = fin + 2;
    fin = mx_strcpy(fin, mx_nbr_to_hex(buf));
    fin = fin - 2;
    free(tmp);
    return fin;

}





