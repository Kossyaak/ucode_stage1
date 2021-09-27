#include "../inc/header.h"

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        mx_printerr("usage: ./read_file [file_path]\n");
        exit(-1);
    }
    char *filename = argv[1];
    int file = open(filename, O_RDONLY);
    if(file < 0)
    {
        mx_printerr("Error open file\n");
        exit(-1);
    }
    int size; 
    char buffer[1];
    size = read(file, buffer, 1);
    for(int i = 0; size; i++)
    {
        buffer[size] = '\0';
        mx_printstr(buffer);
        size = read(file, buffer, 1);
    }
    mx_printchar('\n');
    int close_file = close(file);
    if (close_file < 0)
    {
        mx_printerr("Error close file\n");
        exit(-1);
    }

    return 0;


}







