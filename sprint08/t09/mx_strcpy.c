char *mx_strcpy(char *dst, const char *src);
char *mx_strcpy(char *dst, const char *src)
{
    int i = 0;
    char endchar = '\0';
    for(; src[i] != endchar;i++)
    {
        dst[i] = src[i];
    }
    dst[i] = '\0';
    return dst;
}






