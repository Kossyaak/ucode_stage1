#include "hex_to_nbr.h"

unsigned long mx_hex_to_nbr(const char *hex)
{
    if(hex == NULL)
    {
        return 0;
    }
    unsigned long dec = 0; 
    unsigned long len = 0;
    unsigned long base = 1;
    const char *ptr = hex;
    while(*ptr++)
    {
        len++;
    }
    for(int i = len - 1; i >= 0; i--)
    { 
        if (mx_isdigit(hex[i])) 
        {
            dec += (hex[i] - 48) * base;
            base *= 16;
        }
        else if (mx_isupper(hex[i])) 
        {
            dec += (hex[i] - 55) * base;
            base *= 16;
        }
        else if (mx_islower(hex[i])) 
        {
            dec += (hex[i] - 87) * base;
            base *= 16;
        }
    }
    return dec;
}








