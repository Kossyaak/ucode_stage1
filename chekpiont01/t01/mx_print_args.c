#include <unistd.h>
void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strlen(const char *s);



int main (int argc, char *argv[])
{
    if(argc > 1)
    {
        for(int i = 1; i < argc; i++)
        {
            mx_printstr(argv[i]);
            mx_printchar('\n');
        }
    }
    return 0;
}


void mx_printchar(char c)
{
    write(1, &c, 1);
}

void mx_printstr(const char *s)
{
    write(STDOUT_FILENO, s, mx_strlen(s));
}


int mx_strlen(const char *s)
{
    int len = 0;
    for(int i = 0; *s++; i++)
    {
        len++;
    }
    return len;
}


