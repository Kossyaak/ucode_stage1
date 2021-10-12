#include "../inc/header.h"

void intro(void)
{
    
    char *m1 = "Wake up , Neo..";
    int m1_s = mx_strlen(m1);
    char *m2 = "The Matrix has you..";
    int m2_s = mx_strlen(m2);
    char *m3 = "Follow the white rabbit";
    int m3_s = mx_strlen(m3);
    char *m4 = "Knock, knock, Neo";
    int m4_s = mx_strlen(m4);
    refresh();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    for(int i = 0; i < m1_s; i++)
    {
        mvaddch(5, i + 4, m1[i] | COLOR_PAIR(1) );
        refresh();
        usleep(150000);
    }
    usleep(300000);
    clear();
    for(int i = 0; i < m2_s; i++)
    {
        mvaddch(5, i + 4, m2[i] | COLOR_PAIR(1) );
        refresh();
        usleep(150000);
    }
    usleep(300000);
    clear();
    for(int i = 0; i < m3_s; i++)
    {
        mvaddch(5, i + 4, m3[i] | COLOR_PAIR(1) );
        refresh();
        usleep(150000);
    }
    usleep(300000);
    clear();
    for(int i = 0; i < m4_s; i++)
    {
        mvaddch(5, i + 4, m4[i] | COLOR_PAIR(1) );
        refresh();
        usleep(150000);
    }
    usleep(300000);
    clear();

}








