void mx_printchar(char c);
void mx_only_printable(void)
{
    int i = 126;
    while (i > 36)
    {
        mx_printchar(i);
        mx_printchar('\n');
        i--;
    }
}

