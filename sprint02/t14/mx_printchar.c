#include <unistd.h>
void mx_printint(int n);
void mx_printchar(char c)
{
    write(1, &c, 1);
}
