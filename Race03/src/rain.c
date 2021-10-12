#include "../inc/header.h"

void mx_rain() {
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_WHITE, COLOR_BLACK);

    int yMax = 0;
    int xMax = 0;
    getmaxyx(stdscr, yMax, xMax);
    wchar_t beggin[xMax];
    wchar_t lenght[xMax];
    wchar_t arr[xMax];

    for (int i = 0; i < xMax; i++) {
        beggin[i] = -1 * rand() % 80;
        arr[i] = beggin[i];
        lenght[i] = rand() % 50  - 1;
    }

    long long speedWagon = 52500;

    for(;;) {
        for (int i = 0; i < xMax; i++) {
            wchar_t randCh = (rand() % 93 + 33);
            if (i % 2 == 0) {
                randCh = ' ';
            }
            attron(COLOR_PAIR(2));
            mvaddch(arr[i] + 1, i, randCh);
            attroff(COLOR_PAIR(2));
            mvaddch(arr[i], i, randCh | COLOR_PAIR(1));
            mvaddch(arr[i] - lenght[i], i, ' ' | COLOR_PAIR(1));
            if (arr[i] - lenght[i] > yMax) {
                arr[i] = beggin[i];
                arr[i]++;
            }
            arr[i]++;
        }
        usleep(speedWagon);
        nodelay(stdscr,TRUE);
        char ch = getch();
        if(ch == '+')
        {
            speedWagon /= 2;
        }
        else if(ch == '-')
        {
            speedWagon *= 2;
        }
        else if (ch == 'q')
        {
            clear();
            break;
        }

        refresh();
    }
}



