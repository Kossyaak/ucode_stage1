#include "../inc/header.h"
void print_error(char *arg, char *r)
{
    mx_printerr("mx_wc: ");
    mx_printerr(arg);
    mx_printerr(r);
    mx_printerr(strerror(errno));
    mx_printerr("\n");
    exit(0);
}
void print_res(int a, int b, int c) 
{
        mx_printchar('\t');
        mx_printint(a);
        mx_printchar('\t');
        mx_printint(b);
        mx_printchar('\t');
        mx_printint(c);
}
int main(int argc, char *argv[]) 
{ 
    int total_len = argc - 1; 
    int total_str = 0; 
    int total_sum = 0;
    if (argc < 2) 
    {
        int length = 0;
        int str_counter = 0;
        int summ = 0; 
        char buffer; 
        char helper;
        for(;read(0, &buffer, 1);) 
        {
            if (buffer == '\n') 
            {
                length++;
                total_len++;
            }
            if (mx_isspace(buffer) && !mx_isspace(helper)) 
            {
                str_counter++;
                total_str++;
            }
            summ++;
            total_sum++;
            helper = buffer;
        }
        print_res(length, str_counter, summ);
        mx_printchar('\n');
        return 0;
    }
    for (int i = 1; i < argc; i++) 
    {
        int length = 1;
        int str_counter = 0;
        int summ = 0; 

        int file = open(argv[i], O_RDONLY);
        char buffer, helper;

        if (file < 0) 
        {
            print_error(argv[i], ": open: ");
        }

        if (read(file, &buffer, 1) < 0 && errno == EISDIR) 
        {
            print_error(argv[i], ": read: ");
        }
        if (close(file) < 0) 
        {
            exit(0);
        }
        file = open(argv[i], O_RDONLY);
        for(;read(file, &buffer, 1);) 
        {
            if (buffer == '\n') 
            {
                length++;
                total_len++;
            }
            if (mx_isspace(buffer) && !mx_isspace(helper)) 
            {
                str_counter++;
                total_str++;
            }
            summ++;
            total_sum++;
            helper = buffer;
        }
        if (!mx_isspace(helper)) 
        {
            str_counter++;
            total_str++;
        }
        if (mx_isspace(helper)) 
        {
            length--;
            total_len--;
        }

        if (close(file) < 0) 
        {
            exit(0);
        }
        print_res(length, str_counter, summ);
        mx_printchar('\t');
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
    if (argc > 2) 
    {
        print_res(total_len, total_str, total_sum);
        mx_printstr("\ttotal\n");
    }
    return 0;
}




