void mx_printint(int n);
void mx_printchar(char c);
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

