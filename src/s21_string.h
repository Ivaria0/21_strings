#ifndef SRC_S21_STRING_H_
#define SRC_S21_STRING_H_

#include <stdio.h>

size_t s21_strlen(const char *str);
void s21_strlen_test();
void s21_strlen_check(char *str, size_t exp);

int s21_strcmp(const char *str1, const char *str2);
void s21_strcmp_test();
void s21_strcmp_check(char *str1, char *str2, int exp);

char *s21_strcpy(char *copy, const char *str);
void s21_strcpy_test();
void s21_strcpy_check(char *str, char *copy);

char *s21_strcat(char *cat, const char *str);
void s21_strcat_test();
void s21_strcat_check(char *str, char *copy, char *exp);

#endif  // SRC_S21_STRING_H_
