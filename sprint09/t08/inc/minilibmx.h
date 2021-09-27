#pragma once

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>



int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
int mx_strcmp(const char*s1, const char*s2);
void mx_printstr(const char *s);
void mx_printint(int n);
void mx_printchar(char c);
bool mx_isspace(char c);
bool mx_isdigit(int c);
int mx_atoi(const char *str);


