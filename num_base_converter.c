/**
 *converter - Function to convert numbers to their respective base
 *@num: Number to convert
 *@num_base: Base to convert to
 *
 *Return: Pointer to the converted value
 */
char *converter(int num, int num_base)
{
	/* Function converts num to the appropriate base by taking the*/
	/*remainder and getting the equivalent value from numbers, then save*/
	/*it in a buffer using ptr*/
	static const char numbers[] = "0123456789ABCDEF";
	static char buffer[22];
	char *ptr;

	ptr = &buffer[21];
	*ptr = '\0';

	do {
		*--ptr = numbers[num % num_base];
		num = num / num_base;
	} while (num != 0);

	return (ptr);
}
