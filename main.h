#ifndef PRINTF
#define PRINTF

#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int converter(unsigned int num, int num_base);
int _putchar(char c);
int print_str(char *s);
int print_int(long int);

#endif /*PRINTF*/
