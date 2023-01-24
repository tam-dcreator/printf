#include "main.h"
/**
 *print_str - Function to print a string
 *@s: String to print
 *
 *Return: Number of char printed or null
 */
int print_str(char *s)
{
	int count = 0;

	if (s != NULL)
	{
		while (*s)
		{
			_putchar(*s);
			count++;
			s++;
		}
	}
	else
	{
		return (print_str("null"));
	}

	return (count);
}
