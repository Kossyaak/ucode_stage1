#include <stdlib.h>
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strdup(const char *str);
char *mx_strcat(char *s1, const char *s2);
char *mx_strjoin(char const *s1, char const *s2);
void mx_strdel(char **str);
char *mx_concat_words(char **words);

char *mx_concat_words(char **words)
{
    if(words == NULL)
    {
        return NULL;
    }
    char *fin = NULL;
    for(int i = 0; words[i] != NULL; i++)
    {
        fin = mx_strjoin(fin, words[i]);
    }
    return fin;



}





