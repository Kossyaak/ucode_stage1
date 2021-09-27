int mx_sum_digits(int num)
{
    if (num < 0)
    {
        num = num * -1;
    }
    int sum = 0;
    for (;num != 0;) 
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;

}
