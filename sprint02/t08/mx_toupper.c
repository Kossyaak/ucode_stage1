int mx_toupper(int c)
{
    if (c > 64 || c < 91)
    {
        return c - 32;
    }
    else
    {
        return c;
    }
}
