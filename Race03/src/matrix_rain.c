#include "../inc/header.h"

int main(void)
{
    setlocale(LC_CTYPE, "");
    initscr();
    noecho();
    WINDOW *win = newwin(LINES, COLS, 0, 0);
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    start_color();
    wbkgd(win, COLOR_PAIR(1));
    attron(COLOR_PAIR(1)); 
    curs_set(0);
    refresh();
    start_color();
    intro();
    mx_rain();
    char ch = getch();
    if(ch == 'q')
    {
        clear();
        exit(0);
    }
    delwin(win);
    endwin();
}




