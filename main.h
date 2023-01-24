#ifndef PRINTF
#define PRINTF

#include <stdio.h>
#include <stdarg.h>


int _printf(const char *format, ...);
char *converter(int num, int num_base);
int _putchar(char c);
int _strlen(char *s);
int print_str(char *s);

#endif /*PRINTF*/
