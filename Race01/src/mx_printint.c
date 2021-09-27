#include "header.h"

void mx_printchar(char c);

void mx_printint(int n) {
    if (n == -2147483648) {
        char min[] = {"-2147483648"};
        for (int i = 0; min[i]; i++) {
            mx_printchar(min[i]);
        }
        return;
    }
    if (n < 0) {
        n = n * (-1);
        write(1, "-", 1);
    }
    if (n == 0) {
        write(1, "0", 1);
        return;
    }
    int r = 1;
    int temp = n;
    long del = 1;
    while (temp !=0) {
       temp = (temp / 10);
       r++;
       del = del * 10;
    } 
    r--;
    del = del / 10;

    for (; r > 0; r--) {
        char out;
        int t = n;
        t = t / del;
        out =  t + 48;
        mx_printchar(out);
        n = n % del;
        del = del / 10;
    }               
}










