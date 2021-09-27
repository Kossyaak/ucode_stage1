#include "../inc/header.h"

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        int size;
        char buffer[1];
        size = read(0, buffer, 1);
        for(int i = 0; size; i++)
        {
            write(1, &buffer, 1);
            size = read(0, buffer, 1);
        }
        return 0;

    }
    for(int i = 0; i < argc; i++)
    {
        int file = open(argv[i], O_RDONLY);
        if(file < 0)
        {
            mx_printerr("mx_cat: ");
            mx_printerr(argv[i]);
            mx_printerr(": No such file or directory\n");
            exit(-1);
        }
        int size;
        char buffer[1];
        size = read(file, buffer, 1);
        for(int i = 0; size; i++)
        {
            write(1, &buffer, 1);
            size = read(file, buffer, 1);
        }
        int cl = close(file);
        if(cl < 0)
        {
            mx_printerr("Error close file\n");
            exit(-1);
        }


    }
    return 0;
}


