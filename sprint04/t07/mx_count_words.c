int mx_count_words(const char *str, char delimiter) 
{
    int words = 0;
    int i = 0;
    int wordcounter = 0;
    for(;str[i] != '\0';) 
    {
        if (str[i] == delimiter && wordcounter == 1) 
        {
            wordcounter = 0;
        } 
        else if(str[i] != delimiter && wordcounter == 0) 
        {
            wordcounter = 1;
            words++;
        }
        i++;
    }
    return words;
}






