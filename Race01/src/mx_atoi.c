#include "header.h"
long long mx_atoi(const char *str) {
    int result=0, m = 0;
    for (int z = 0; str[z]; z++) {
        for (int i = 48; i <= 57; i++) {
            if ((int)str[z] == 45) {
                m = 1;
                continue;
            }
            if (mx_isspace(str[z])) {
                continue;
            }
            if (!mx_isdigit(str[z])) {
                if (m == 1) {
                    result *= -1;
                }
                return (result / 10);
            }
            if ((int)str[z] == i) {
                result += (i - 48);
                if(str[z + 1]){
                    result = result*10;
                }
            }
        }
    }
    if (m == 1) {
        result *= -1;
    }
    return result;
}







