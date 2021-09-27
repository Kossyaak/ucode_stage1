#include <unistd.h>

void mx_matrix_voice(void)
{
    char *signal = "\a";
    write(STDOUT_FILENO, signal, strlen(signal));
}

