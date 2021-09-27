int mx_lcm(int a, int b);
int mx_gcd(int a, int b);
int mx_lcm(int a, int b)
{
    int mult = a * b;
    int gcd = mx_gcd(a, b);
    int lcm = mult / gcd;
    if(lcm < 0)
    {
        lcm *= -1;
        return lcm;
    }
    else
    {
        return lcm;
    }

}






