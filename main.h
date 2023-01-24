#ifndef PRINTF
#define PRINTF

#include <stdio.h>
#include <stdarg.h>


int _printf(const char *format, ...);
char *converter(int num, int num_base);

#endif /*PRINTF*/
