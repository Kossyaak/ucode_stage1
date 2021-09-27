char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub) 
{
    int counter = 0;
    const char *temp_str = str;

    for(;mx_strstr(temp_str,sub);) 
    {
        temp_str = mx_strstr(temp_str, sub);
        for (int i = 0; i < mx_strlen(sub); i++) 
        {
            temp_str++;
        }
            counter++;
    }
    return counter;
}





