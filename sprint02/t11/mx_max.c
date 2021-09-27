int mx_max(int a, int b, int c)
{
    int maximum = 0;
    if (a >= b && a >= c)
    {
        maximum = a;
    }
    else if (b >= a && b >= c)
    {
        maximum = b;
    }
    else if (c >= a && c >= b)
    {
        maximum = c;
    }
    return maximum;
}
