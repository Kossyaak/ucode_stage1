#include <unistd.h>
void mx_printstr(const char *s);
int mx_strlen(const char *s);
void mx_printstr(const char *s)
{
    write(STDOUT_FILENO, s, mx_strlen(s));
}






