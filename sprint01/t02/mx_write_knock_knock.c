#include <unistd.h>

void mx_write_knock_knock(void)
{
    char *s1 = "Follow the white rabbit.\nKnock, knock, Neo.\n";
    write(STDOUT_FILENO, s1, strlen(s1));
}

