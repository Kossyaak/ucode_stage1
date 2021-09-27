#ifndef _HEADER_
#define _HEADER_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
bool mx_isdigit(int c);
bool mx_isspace(char c);
long long mx_atoi(const char* str);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str); 
void mx_printerr(const char *s);
double mx_pow(double n, unsigned int pow);
char *mx_itoa(long long number);
char *mx_del_extra_whitespaces(const char *str);
void mx_strdel(char **str);
char *mx_strncpy(char *dst, const char *src, int len);

void mx_check(char *arr[], char *operand1, char *operation, char *operand2, char *result, int operand1_l, int opertion_l, int operand2_l, int result_l);
void mx_print_eq(char *operand1, char *operation, char *operand2, char *result, int operand1_l, int operand2_l, int result_l);

#endif








