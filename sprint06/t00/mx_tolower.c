int mx_tolower(int c);
int mx_tolower(int c)
{
    if(c > 64 || c < 91)
    {
        return c + 32;
    }
    else
    {
        return c;
    }
}






