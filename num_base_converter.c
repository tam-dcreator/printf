#include "main.h"
/**
 *converter - Function to convert numbers to their respective base and print
 *@num: Number to convert
 *@num_base: Base to convert to
 *
 *Return: Number of ints printed
 */
int converter(unsigned int num, int num_base)
{
	/* Function converts num to the base num_base, by passing the */
	/* modulo value into numbers[] to get the char equivalent */
	/* then save it in buffer[61] using ptr, starting from the end. */
	static const char numbers[] = "0123456789ABCDEF";
	char buffer[61];
	char *ptr;
	int counter = 0;

	ptr = &buffer[60];
	*ptr = '\0';

	do {
		ptr--;
		*ptr = numbers[num % num_base];
		counter++;
		num = num / num_base;
	} while (num != 0);

	/*Check if total chars inputed for a binary conversion is a multiple*/
	/* of 4, if its not, add a leading zero*/
	if (num_base == 2 && counter % 4 != 0)
	{
		ptr--;
		*ptr = numbers[num];
		counter++;
	}

	/*Print buffer value, starting from the current address of ptr */
	while (*ptr != '\0')
		_putchar(*ptr++);

	return (counter);
}
