#include <stdbool.h>
bool mx_is_narcissistic(int num);
double mx_pow(double n, unsigned int pow);
int main(void)
{

}
bool mx_is_narcissistic(int num)
{
    int sum = 0;
    int buff = 0;
    int count = 0;
    for(int i = 0, buff = num; buff > 0; i++)
    {
        buff /= 10;
        count++
    }
    for(int i = 0, buff = num; num > 0; i++)
    {
        int del = num % 10;
        sum = mx_pow(del, count);
        num /= 10
    }
    if(sum != num)
    {
        return false;
    }
    else
    {
        return true;
    }

}
