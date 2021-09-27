
int mx_atoi(const char *str);
int mx_atoi(const char *str){
    int number = 0; int i = 0; int negative = 1;
    if(str[0] == '-'){
        negative = - 1;
        i++;
    }
    while(str[i] && str[i] > 47 && str[i] < 58){
        number = number * 10 + (str[i] - 48);
        i++;
    }
    if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'){
        return 0;
    }
    number = number * negative;
    return number;
}

