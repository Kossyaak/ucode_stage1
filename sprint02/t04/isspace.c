#include <stdbool.h>
bool mx_isspace(char c)
{
    if (c == ' ')
    {
        return 1;
    }
    else if (c == '\t')
    {
        return 1;
    }
    else if (c == '\n')
    {
        return 1;
    }
    else if (c == '\v')
    {
        return 1;
    }
    else if (c == '\f')
    {
        return 1;
    }
    else if (c == '\r')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
