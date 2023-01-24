#include "main.h"
/**
 *print_str - Function to print a string
 *@s: String to print
 *
 *Return: Number of char printed or null
 */
int print_str(char *s)
{
	if (s != NUll)
	{
		while (*s)
		{
			_putchar(*s++);
		}
	}
	else
	{
		return (print_str("(null)"));
	}

	return (_strlen(s));
}
