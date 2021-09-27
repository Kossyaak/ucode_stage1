#include "header.h"
void mx_print_res(int i, char *operation, int j, int k) {
    mx_printint(i);
    mx_printstr(operation);
    mx_printint(j);
    mx_printstr(" = ");
    mx_printint(k);
    mx_printchar('\n');

}
void mx_print_eq(char *operand1, char *operation, char *operand2, char *result, int operand1_l, int operand2_l, int result_l) 
{

    if (*operation == '?') 
    {
        mx_print_eq(operand1, "+", operand2, result, operand1_l, operand2_l, result_l);
        mx_print_eq(operand1, "-", operand2, result, operand1_l, operand2_l, result_l);
        mx_print_eq(operand1, "*", operand2, result, operand1_l, operand2_l, result_l);
        mx_print_eq(operand1, "/", operand2, result, operand1_l, operand2_l, result_l);
        return;
    }
    bool isKBelowZero = false;
    bool isIBelowZero = false;
    bool isJBelowZero = false;
    if (operand1[0] == '-') 
    {
        isIBelowZero = true;
        operand1++;
        operand1_l--;
    } 
    if (operand2[0] == '-') 
    {
        isJBelowZero = true;
        operand2++;
        operand2_l--;
    }
    if (result[0] == '-') 
    {
        isKBelowZero = true;
        result++;
        result_l--;
    }

    long long first_num = mx_atoi(operand1);
    long long second_num = mx_atoi(operand2);
    long long third_num = mx_atoi(result);

    for (long long i = 0; i < mx_pow(10, operand1_l); i++) 
    {
        if (first_num > 0) 
        {
            i = first_num;
        }
        char *i_str = mx_itoa(i);
        int i_str_length = mx_strlen(i_str);
        bool isCorrectI = true;

        for (int i_i = 0; i_i < operand1_l - i_str_length; i_i++) 
        {
            if (mx_isdigit(operand1[i_i]) && operand1[i_i] != '0') 
            {
                isCorrectI = false;
                break;
            }
        }

        for (int i_i = operand1_l - i_str_length, i_str_i = 0; i_i < operand1_l; i_i++, i_str_i++) 
        {
            if (operand1[i_i] != '?' && operand1[i_i] != i_str[i_str_i]) 
            {
                isCorrectI = false;
                break;
            }
        }
        free(i_str);
        i_str = NULL;

        if (!isCorrectI) 
        {
            continue;
        }

        for (long long j = 0; j < mx_pow(10, operand2_l); j++) 
        {  
            if (second_num > 0) 
            {
                j = second_num;
            }

            char *j_str = mx_itoa(j);
            int j_str_length = mx_strlen(j_str);
            bool isCorrectJ = true;

            for (int j_i = 0; j_i < operand2_l - j_str_length; j_i++) 
            {
                if (mx_isdigit(operand2[j_i]) && operand2[j_i] != '0') 
                {
                    isCorrectJ = false;
                    break;
                }
            }

            for (int j_i = operand2_l - j_str_length, j_str_i = 0; j_i < operand2_l; j_i++, j_str_i++) 
            {
                if (operand2[j_i] != '?' && operand2[j_i] != j_str[j_str_i]) 
                {
                    isCorrectJ = false;
                    break;
                }
            }

            free(j_str);
            j_str = NULL;

            if (!isCorrectJ) 
            {
                continue;
            }
            
            for (long long k = 0; k < mx_pow(10, result_l); k++) 
            {
                if (third_num > 0) 
                {
                    k = third_num;
                }
                char *k_str = mx_itoa(k);
                int k_str_length = mx_strlen(k_str);
                bool isCorrectK = true;

                for (int k_i = 0; k_i < result_l - k_str_length; k_i++) 
                {
                    if (mx_isdigit(result[k_i]) && result[k_i] != '0') 
                    {
                        isCorrectK = false;
                        break;
                    }
                }

                for (int k_i = result_l - k_str_length, k_str_i = 0; k_i < result_l; k_i++, k_str_i++) 
                {
                    if (result[k_i] != '?' && result[k_i] != k_str[k_str_i]) 
                    {
                        isCorrectK = false;
                        break;
                    }
                }

                free(k_str);
                k_str = NULL;

                if (!isCorrectK) 
                {
                    continue;
                }

                if (isIBelowZero) 
                {
                    i *= -1;
                }
                if (isJBelowZero) 
                {
                    j *= -1;
                }
                if (isKBelowZero) 
                {
                    k *= -1;
                }
                switch(*operation)
                {
                case('+'):
                    if (i + j == k) 
                    {
                        mx_print_res(i, "+", j, k);
                    }
                    break;
                case('-'):
                    if (i - j == k) 
                    {
                       mx_print_res(i, "-", j, k);
                    }
                    break;
                case('*'):
                    if (i * j == k) 
                    {
                        mx_print_res(i, "*", j, k);
                    }
                    break;
                case('/'):
                    if (j != 0 && i / j == k) 
                    {
                        mx_print_res(i, "/", j, k);
                    }
                    break;
                }
                
                if (isIBelowZero) 
                {
                    i *= -1;
                }
                if (isJBelowZero) 
                {
                    j *= -1;
                }
                if (isKBelowZero) 
                {
                    k *= -1;
                }
                if (third_num > 0) 
                {
                    break;
                }
            }
            if (second_num > 0) 
            {
                break;
            }
        }
        if (first_num > 0) 
        {
            break;
        }
    }

    if (isIBelowZero) 
    {
        operand1--;
    }
    if (isJBelowZero) 
    {
        operand2--;
    }
    if (isKBelowZero) 
    {
        result--;
    }

}







