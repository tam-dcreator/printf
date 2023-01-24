#include "main.h"
#include <stdarg.h>
/**
 *_printf - function that prints output according to format
 *@format: string to be printed
 *Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	char cont *str, *s;
	va_list args;
	int count = 0;

	va_start(args, format);

	for (str = format; *str != '\0'; str++)
	{
		while (*str != '%' || *str != '\0')
		{
			_putchar(*str);
			count++;
			str++;
		}

		str++;
		switch (*str)
		{
		case 'c':
			putchar(va_arg(args, int));
			count++;
			str++;
			break;
		case 's':
			s = va_arg(args, char*);
			count += print_str(s);
			str++;
			break;
		case ' % ':
			putchar(' % ');
			count++;
			str++;
			break;
		}
	}
	va_end(args);

	return (count);
}
