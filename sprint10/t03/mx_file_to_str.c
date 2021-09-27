#include "file_to_str.h"
char *mx_file_to_str(const char *filename)
{
    if (filename == NULL) 
    {
        return NULL;
    }
    int file = open(filename, O_RDONLY);
    if (file < 0) 
    {
        return NULL;
    }
    char buffer;
    int length = 0; 
    for(;read(file, &buffer, 1);) 
    {
        length++;
    }
    int cl = close(file);
    if (cl < 0) 
    {
        return NULL;
    }
    file = open(filename, O_RDONLY);
    if (file < 0) 
    {
        return NULL;
    }
    char *arr = mx_strnew(length);
    int i = 0;
    for(;read(file, &buffer, 1);) 
    {
        arr[i++] = buffer;
    }
    int cl1 = close(file);
    if (cl1 < 0) 
    {
        return NULL;
    }
    return arr;
}





