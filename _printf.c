#include "main.h"
/**
 *_printf - function that prints output according to format
 *@format: string to be printed
 *Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	char const *str;
	va_list args;
	int count = 0;

	if (format == NULL)
		return (0);

	va_start(args, format);
	for (str = format; *str != '\0'; str++)
	{
		while (*str != '%')
		{
			_putchar(*str);
			count++;
			str++;
		}
		str++;
		switch (*str)
		{
		case 'c':
			_putchar(va_arg(args, int));
			count++;
			break;
		case 's':
			count += print_str(va_arg(args, char*));
			break;
		case '%':
			_putchar('%');
			count++;
			break;
		default:
			_putchar('%');
			_putchar(*str);
			count += 2;
		}
	}
	va_end(args);
	return (count);
}
