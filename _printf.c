#include <stdio.h>
#include <stdarg.h>
/**
 *_printf - function that prints output according to format
 *@format: string to be printed
 *Return: str;
 */

int _printf(const char *format, ...)
{
va_list args;

va_start(args, format);
char cont *str = format;
for (str = format; *str != '\0'; str++)
{
while (*str != '%' || *str != '\0')
putchar(*str);
if (*str == '%')
{
str++;
switch (*str)
{
case 'c':
putchar(va_arg(args, int));
str++;
break;
case 's':
puts(va_arg(args, char *));
str++;
break;
case '%':
putchar('%');
str++;
break;
}
}
else
{
putchar(*str);
str++;
}
}
va_end(args);
return (str);
}
