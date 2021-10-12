#include "../inc/header.h"

int  if_open(char *a) 
{
    int file = open(a, 0);
    if (file < 0) {
        write(2, "error\n", 6);
        return -1;
    }
    return file;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        write(2, "usage: ./read_file [file_path]\n", 31);
        return -1;
    }
    int file = if_open(argv[1]);
    char c;
    while (read(file, &c, 1) > 0) 
    {
        write(1, &c, 1);
    }
    close(file);
    return 0;
}







