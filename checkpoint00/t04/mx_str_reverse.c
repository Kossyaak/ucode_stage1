void mx_str_reverse(char *s);
void mx_str_reverse(char *s)
{
    char *tmp = s;
    char buffer;
    int len = 0;
    for(int i = 0; s[i] != '\0'; i++){
        len++;
    }
    for(int i = 0; i < len - 1 - i; i++){
         buffer = s[i];
        s[i] = s[len - i - 1];
        s[len - i -1] = buffer;

    }
}








