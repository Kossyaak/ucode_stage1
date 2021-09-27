#include <stdbool.h>
int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printint(int n);
int main(int argc, char *argv[])
{
    if (argc > 1)
    {

        for (int i = 1; i < argc; i++)
        {
            int n = mx_atoi(argv[i]);
            for (unsigned int j = 1 << 31; j > 0; j /= 2)
            {
                if (n & j)
                {
                    mx_printint(1);
                }
                else
                {
                    mx_printint(0);
                }
            }
        mx_printchar('\n');
        }
    }
    return 0;
}