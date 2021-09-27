void mx_is_positive(int i);
void mx_printstr(const char *s);
int mx_strlen(const char *s);
{
    if (i > 0)
    {
        mx_printstr("Positive\n");
    }
    else if (i < 0)
    {
        mx_printstr("Negative\n");
    }
    else
    {
        mx_printstr("Zero\n");
    }
}
