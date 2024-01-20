#include "s21_string.h"

#include <stdio.h>
#include <stdlib.h>

size_t s21_strlen(const char *str) {
    size_t len = 0;
    if (str != NULL) {
        for ( ; *(str + len); len++) {}
    return len;
    } else {
        return 0;
    }
}

int s21_strcmp(const char *str1, const char *str2) {
    if ((str1 != NULL) && (str2 != NULL)) {
        for ( ; *str1 && *str1 == *str2; str1++, str2++) {}
        return *str1 - *str2;
    } else if (str1 != NULL) {
        return s21_strlen(str1);
    } else if (str2 != NULL) {
        return -s21_strlen(str2);
    } else {
        return 0;
    }
}

char *s21_strcpy(char *copy, const char *str) {
    if (str != NULL) {
        for ( ; *str; str++, copy++) {
            *copy = *str;
        }
        *copy++ = '\0';
        return copy;
    } else {
        *copy = '\0';
        return NULL;
    }
}

char *s21_strcat(char *cat, const char *str) {
    if (str != NULL) {
        s21_strcpy(cat + s21_strlen(cat), str);
        return cat;
    } else {
        return cat;
    }
}
