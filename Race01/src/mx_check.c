#include "header.h"
void mx_output_error(char *c, char *err)
{
    char *arg = mx_del_extra_whitespaces(c);
    mx_printerr(err);
    mx_printerr(arg);
    mx_printerr("\n");
    exit(-1);
}

void mx_check(char *argv[], char *operand1, char *operation, char *operand2, char *result, int operand1_l, int operation_l, int operand2_l, int result_l) 
{
    char *inv_op = "Invalid operand: ";
    char *inv_oper = "Invalid operation: ";
    char *inv_res = "Invalid result: ";
    if (operand1_l <= 0) 
    {
        mx_output_error(argv[1], inv_op);
    }
    if (operation_l != 1) 
    {
        mx_output_error(argv[2], inv_oper);
    }
    if (operand2_l <= 0) 
    {
        mx_output_error(argv[3], inv_op);
    }
    if (result_l <= 0) 
    {
        mx_output_error(argv[4], inv_res);
    }

    for (int i = 0; i < operand1_l; i++) 
    {
        if (i == 0 && operand1[i] == '-') 
        {
            continue;
        }
        if (operand1[i] != '?' && mx_isdigit(operand1[i]) == false) 
        {
            mx_output_error(argv[1], inv_op);
        }
    }


    if (*operation != '?' && *operation != '+' && *operation != '-' && *operation != '*' && *operation != '/') 
    {
         mx_output_error(argv[2], inv_oper);
    }

    for (int i = 0; i < operand2_l; i++) 
    {
        if (i == 0 && operand2[i] == '-') 
        {
            continue;
        }
        if (operand2[i] != '?' && !mx_isdigit(operand2[i])) 
        {
            mx_output_error(argv[3], inv_op);
        }
    }

    for (int i = 0; i < result_l; i++) 
    {
        if (i == 0 && result[i] == '-') 
        {
            continue;
        }
        if (result[i] != '?' && !mx_isdigit(result[i])) 
        {
          mx_output_error(argv[4], inv_op);
        }
    }

}











