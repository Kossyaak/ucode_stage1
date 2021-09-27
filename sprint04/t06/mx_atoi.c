bool mx_isspace(char c);
bool mx_isdigit(int c);

int mx_atoi(const char *str) 
{
    int len = 0;
    int i = 0;
    int a = 0;
    int min = 1;

    if (str[0] == '-')
    {
        a = 1;
        min = 0;
    }

    for(;str[i] != '\0';) 
    {
        if (mx_isdigit(str[i]))
        {
        len++;
        }
        i++;
    }

    int integer = 0;

    for ( ; str[a] != '\0'; k++)
    {
        int result = 1;
        for (int m = 0; m < (len - k - min); m++) 
        {
            result *= 10;
        }
        integer += (str[a] - 48) * result;
        }
    return (min == 0) ? integer * -1 : integer;
}



