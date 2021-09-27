#include <stdbool.h>
bool mx_is_prime(int num);
bool mx_is_prime(int num)
{
    int counter = 0;
    for(int i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            counter++;
        }
    }
    if(counter > 2)
    {
        return false;
    }
    else
    {
        return true;
    } 
}
