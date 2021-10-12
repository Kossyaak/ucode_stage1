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
int file_w(char *a) {
    return open(a, O_CREAT | O_EXCL | O_WRONLY, S_IWUSR | S_IRUSR);
}

int main(int argc, char *argv[]) 
{
    if (argc != 3) {
        write(2, "usage: ./mx_cp [source_file] [destination_file]\n", 48);
        return -1;
    }
    int file1 = if_open(argv[1]);
    if(file1 == -1)
    {
        return -1;
    }
    int file2 = file_w(argv[2]);
    char c;
    while (read(file1, &c, 1))
    {
        write(file2, &c, 1);
    }
    close(file1);
    close(file2);
    return 0;
}





