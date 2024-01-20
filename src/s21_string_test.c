#include "s21_string.h"

#include <stdio.h>
#include <stdlib.h>

void s21_strlen_test() {
    char *str;
    str = "";
    s21_strlen_check(str, 0);
    str = "Hello";
    s21_strlen_check(str, 5);
    str = NULL;
    s21_strlen_check(str, 0);
}

void s21_strlen_check(char *str, size_t exp) {
    printf("%s\n", str);
    size_t res = s21_strlen(str);
    printf("%zu\n", res);
    if (res == exp)
        printf("SUCCESS\n");
    else
        printf("FAIL\n");
}

void s21_strcmp_test() {
    char *str1, *str2;
    str1 = "";
    str2 = "";
    s21_strcmp_check(str1, str2, 0);
    str1 = "Hello";
    str2 = "12345";
    s21_strcmp_check(str1, str2, 1);
    str1 = "War";
    str2 = "12345";
    s21_strcmp_check(str1, str2, 1);
    str1 = NULL;
    str2 = "532";
    s21_strcmp_check(str1, str2, -1);
    str1 = "";
    str2 = NULL;
    s21_strcmp_check(str1, str2, 0);
    str1 = "";
    str2 = "1";
    s21_strcmp_check(str1, str2, -1);
    str1 = "World";
    str2 = "123";
    s21_strcmp_check(str1, str2, 1);
}

void s21_strcmp_check(char *str1, char *str2, int exp) {
    printf("%s\n%s\n", str1, str2);
    int res = s21_strcmp(str1, str2);
    printf("%d\n", res);
    if (((res > 0) && (exp > 0)) || ((res < 0) && (exp < 0)) || (res == exp))
        printf("SUCCESS\n");
    else
        printf("FAIL\n");
}

void s21_strcpy_test() {
    char *str, copy[20] = "111111111111111111";
    str = "";
    s21_strcpy_check(str, copy);
    str = "Hello";
    s21_strcpy_check(str, copy);
    str = NULL;
    s21_strcpy_check(str, copy);
    str = " ";
    s21_strcpy_check(str, copy);
    str = "192";
    s21_strcpy_check(str, copy);
}

void s21_strcpy_check(char *str, char *copy) {
    printf("%s\n", str);
    if (s21_strcpy(copy, str) != NULL) {
        printf("%s\n", copy);
        if (s21_strcmp(str, copy) == 0)
            printf("SUCCESS\n");
        else
            printf("FAIL\n");
    } else {
        if (str == NULL) {
            copy = NULL;
            printf("%s\n", copy);
            printf("SUCCESS\n");
        } else {
            printf("FAIL");
        }
    }
}

void s21_strcat_test() {
    char *str, cat[20];
    str = "";
    s21_strcat_check(str, cat, "");
    str = "123";
    s21_strcat_check(str, cat, "123");
    str = NULL;
    s21_strcat_check(str, cat, "123");
    str = " - 192";
    s21_strcat_check(str, cat, "123 - 192");
    str = " re";
    s21_strcat_check(str, cat, "123 - 192 re");
}

void s21_strcat_check(char *str, char *cat, char *exp) {
    printf("%s\n", cat);
    printf("%s\n", str);
    s21_strcat(cat, str);
    printf("%s\n", cat);
    if (s21_strcmp(cat, exp) == 0)
        printf("SUCCESS\n");
    else
        printf("FAIL\n");
}
