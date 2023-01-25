#include "main.h"
/**
 *print_int - Function to print an integer
 *@var: Integer variable to be printed
 *
 *Return: Number of integers printed
 */
int print_int(long int var)
{
	int count = 0;

	if (var < 0)
	{
		_putchar('-');
		count++;
		var = -var;
	}

	if (var / 10)
		count += print_int(var / 10);

	_putchar(var % 10 + 48);
	count++;

	return (count);
}
