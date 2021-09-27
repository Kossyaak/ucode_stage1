#include <time.h>

double mx_timer (void (*f)()) 
{
    double stop;
    double start = clock();
    (*f)();
    stop = (clock() - start) / (double) 1000000;
    return stop;
}





