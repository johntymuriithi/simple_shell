#include "main.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int printString(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count += _putchar(*str);
		str++;
	}
	return (count);
}
