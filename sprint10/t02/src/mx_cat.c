#include "../inc/header.h"

int if_open(char *a) 
{
    int file = open(a, 0);
    if (file < 0) {
        write(2, "error\n", 6);
        return -1;
    }
    return file;
}

int main(int argc, char *argv[]) 
{
    char c;
    int file;
    if (argc == 1) {
        while (read(0, &c, 1))
        {
            write(1, &c, 1);
        }
    }
    else
    {
        for(int i = 1; i < argc; i++) {
            file = if_open(argv[i]);
            if (file != -1) 
            {
                while (read(file, &c, 1))
                {
                    write(1, &c, 1);
                }
            }
            close(file);
        }
    }
    return 0;
}




