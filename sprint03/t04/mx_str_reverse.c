void mx_str_reverse(char*s);
int mx_strlen(const char *s);
void mx_swap_char(char*s1, char*s2);
void mx_str_reverse(char *s)
{
    for(int i = 0; i < mx_strlen(s) - 1 - i; i++)
    {
        mx_swap_char(&s[i], &s[mx_strlen(s) - i - 1]);
    }
}
