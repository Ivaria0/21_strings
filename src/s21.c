#include "s21_string.h"

#include <stdio.h>

int main() {
#ifdef STRLEN

    s21_strlen_test();

#endif

#ifdef STRCMP

    s21_strcmp_test();

#endif

#ifdef STRCPY

    s21_strcpy_test();

#endif

#ifdef STRCAT

    s21_strcat_test();

#endif
}
