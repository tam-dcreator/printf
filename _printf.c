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
		else
		{
			i++;
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
			  _putchar(signed int 
			        
			default:
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
	}
	va_end(args);
	return (count);
}
