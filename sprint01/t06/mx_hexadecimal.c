void mx_printchar(char c);
void mx_hexadecimal()
{
    int i = 0;
    while (i < 16)
    {
        if (i > 9)
        {
            mx_printchar(i + 55);
        }
        else if (i <= 9)
        {
            mx_printchar(i + 48);                
        }
        i++;
    }
    mx_printchar('\n');
}

