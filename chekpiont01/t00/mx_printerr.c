#include <unistd.h>


int mx_strlen(const char *s)
{
    int len = 0;
    for(int i = 0; *s++; i++)
    {
        len++;
    }
    return len;
}

void mx_printerr(const char *s)
{
    write(STDERR_FILENO, s, mx_strlen(s));
}






