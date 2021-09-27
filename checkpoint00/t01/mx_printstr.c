void mx_printstr(const char *s);
void mx_printstr(const char *s)
{
    int counter = 0;
    while(s[counter]!= '\0')
    {
        counter++;
    }
    write(1, s, counter);
}








