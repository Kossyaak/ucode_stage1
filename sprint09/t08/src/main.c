#include "calculator.h"

int main(int argc, char *argv[]) 
{
    if (argc != 4) 
    {
        char *err = "usage: ./calc [operand1] [operation] [operand2]\n";
        write(STDERR_FILENO, err, mx_strlen(err));
        return 0;
    }
    if ((mx_atoi(argv[1]) == 0 && !(mx_strcmp(argv[1], "0") == 0)) || (mx_atoi(argv[3]) == 0 && !(mx_strcmp(argv[3], "0") == 0))) 
    {
        char *err1 = "error: invalid number\n";
        write(STDERR_FILENO, err1, mx_strlen(err1));
        return 0;
    }
    
    int a = mx_atoi(argv[1]); 
    int b = mx_atoi(argv[3]);
    if ((mx_strcmp(argv[2], "%") == 0 || mx_strcmp(argv[2], "/") == 0) && mx_strcmp(argv[3], "0") == 0) 
    {
        char *err2 =  "error: division by zero\n";
        write(STDERR_FILENO, err2, mx_strlen(err2));
        return 0;
    }
    if (mx_strcmp(argv[2], "+") == 0) 
    {
        mx_printint(a + b);
        mx_printchar('\n');
        return 0;
    }

    if (mx_strcmp(argv[2], "-") == 0) 
    {
        mx_printint(a - b);
        mx_printchar('\n');
        return 0;
    }
    if (mx_strcmp(argv[2], "/") == 0) 
    {
        mx_printint(a / b);
        mx_printchar('\n');
        return 0;
    }
    if (mx_strcmp(argv[2], "*") == 0) 
    {
        mx_printint(a * b);
        mx_printchar('\n');
        return 0;
    }
    if (mx_strcmp(argv[2], "%") == 0) 
    {
        mx_printint(a % b);
        mx_printchar('\n');
        return 0;
    }
    char *err3 =  "error: invalid operation\n";
    write(STDERR_FILENO, err3, mx_strlen(err3));
    return 0;
}




