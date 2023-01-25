#include "main.h"
/**
 *_printf - function that prints output according to format
 *@format: string to be printed
 *Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else if (format[++i] != '\0')
		{
			switch (format[i])
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
			case 'd':
				count += print_int((long)(va_arg(args, int)));
				break;
			case 'i':
				count += print_int((long)(va_arg(args, int)));
				break;
			case 'u':
				count += print_int
					((long)(va_arg(args, unsigned int)));
				break;
			case 'b':
				count += converter(va_arg(args, int), 2);
				break;
			case 'o':
				count += converter(va_arg(args, int), 8);
				break;
			case 'x':
				count += converter(va_arg(args, int), 16);
				break;
			case 'X':
				count += converter(va_arg(args, int), 16);
				break;
			default:
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		else
		{
			_putchar(format[++i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
