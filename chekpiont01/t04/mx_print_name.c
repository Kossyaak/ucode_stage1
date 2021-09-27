#include <unistd.h>
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
int mx_strlen(const char *s);

int main (int argc, char *argv[])
{
    mx_printstr(argv[0]);
    mx_printchar('\n');
    int count = argc;
    mx_printint(argc);
    mx_printchar('\n');
    return 0;
}
void mx_printchar(char c)
{
    write(1, &c, 1);
}

void mx_printint(int n)
{   
    int size = 0;
    if (n == 0) 
    {
        mx_printchar('0');
        return;
    }
    if (n < 0) {
        n = n * -1;
        mx_printchar('-');
    }
    int buf  = n;
    for (;buf > 0;)
    {
        buf = buf / 10;
        size++;
    }
    char str[size];
    for (int i = size - 1; i >= 0 ; i--)
    {
        buf = n % 10;
        str[i] = buf + '0';
        n = n / 10;
    }
    for (int i = 0; i < size ; i++)
    {
        mx_printchar(str[i]);
    }
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





