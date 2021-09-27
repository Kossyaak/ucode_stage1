void mx_printint(int n);
void mx_printchar(char c);
void mx_printint(int n)
{   
    int u  = 0;
    int buf  = n;
    for (;buf > 0;)
    {
        buf = buf / 10;
        u++;
    }
    char str[u];
    for (int i = 0; i < u;i++)
    {
        int j;
        j = n % 10;
        str[i] = j + 48;
        n = n / 10;
    }
    for (int i = u; i != -1 ; i--)
    {
        mx_printchar(str[i]);
    }
}



