int mx_mid(int a, int b, int c)
{
    int mid = 0;
    if ((a < b && b < c) || (c < b && b < a))
    {
        mid = b;
    }
    else if ((b < a && a < c) || (c < a && a < b))
    {
        mid = a;
    }
    else
    {
        mid = c;
    }
    return mid;
}
