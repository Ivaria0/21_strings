all: strlen_tests strcmp_tests strcpy_tests strcat_tests

strlen_tests: s21_string_test.o s21_string.o
	gcc -Wall -Wextra -Werror -o ../build/Quest_1 s21.c ../build/s21_string_test.o ../build/s21_string.o -D STRLEN

strcmp_tests: s21_string_test.o s21_string.o
	gcc -Wall -Wextra -Werror -o ../build/Quest_2 s21.c ../build/s21_string_test.o ../build/s21_string.o -D STRCMP

strcpy_tests: s21_string_test.o s21_string.o
	gcc -Wall -Wextra -Werror -o ../build/Quest_3 s21.c ../build/s21_string_test.o ../build/s21_string.o -D STRCPY

strcat_tests: s21_string_test.o s21_string.o
	gcc -Wall -Wextra -Werror -o ../build/Quest_4 s21.c ../build/s21_string_test.o ../build/s21_string.o -D STRCAT

s21_string_test.o:
	gcc -Wall -Wextra -Werror -c -o ../build/s21_string_test.o s21_string_test.c

s21_string.o:
	gcc -Wall -Wextra -Werror -c -o ../build/s21_string.o s21_string.c

clean:
	rm -rf *.o ../build/*

rebuild: clean all
