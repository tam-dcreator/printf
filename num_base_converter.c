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
	/* Function converts num to the appropriate base by taking the*/
	/*remainder and getting the equivalent value from numbers, then save*/
	/*it in a buffer using ptr*/
	static const char numbers[] = "0123456789ABCDEF";
	char buffer[22];
	char *ptr;
	int i, counter = 0, j = 0;

	ptr = &buffer[21];
	*ptr = '\0';
	j++;

	do {
		*--ptr = numbers[num % num_base];
		j++;
		num = num / num_base;
	} while (num != 0);

	for (i = (22 - j); j < 21; j++)
	{
		counter += _putchar(buffer[i]);
	}
	return (counter);
}
