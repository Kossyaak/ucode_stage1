#include "file_to_str.h"
int if_open(char *a) 
{
    int file = open(a, 0);
    if (file < 0) {
        write(2, "error\n", 6);
        return -1;
    }
    return file;
}

char *mx_file_to_str(const char* filename)
{
    char *dst = NULL;
    int size = 0;
    char c;
    int file = if_open(filename);
    while (read(file, &c, 1))
    {
        size++;
    }
    close(file);
    file = if_open(filename);
    dst = mx_strnew(size);
    for (int i = 0; read(file, &c, 1); i++)
    {
        dst[i] = c;
    }
    close(file);
    return dst;
}








