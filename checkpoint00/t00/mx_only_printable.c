#include <unistd.h>
void mx_only_printable(void);
void mx_only_printable(void)
{
    int i = 126;
    while(i > 31)
    {
        char c = i;
        write(1, &c, 1);
        i--;
    }
    char p = '\n';
    write(1, &p, 1);
}




