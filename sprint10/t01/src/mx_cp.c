#include "../inc/header.h"

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        mx_printerr("usage: ./mx_cp [source_file] [destination_file]\n");
        exit(-1);
    }
    char *filename1 = argv[1];
    char *filename2 = argv[2];
    int f1 = open(filename1, O_RDONLY);
    int f2 = open(filename2, O_CREAT | O_EXCL | O_WRONLY, S_IWUSR | S_IRUSR);
    if(f1 < 0)
    {
        mx_printerr("mx_cp: ");
        mx_printerr(filename1);
        mx_printerr(": No such file or directiory\n");
        exit(-1);
    }
    int size;  
    char buffer[1];
    size = read(f1, buffer, 1);
    for(int i = 0; size; i++)
    {
        write(f2, buffer, 1);
        size = read(f1, buffer, 1);
    }
    int cl1 = close(f1);
    int cl2 = close(f2);
    if(cl1 < 0 || cl2 < 0)
    {
        mx_printerr("Error close file\n");
        exit(-1);
    }
    return 0;

}






