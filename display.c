#include "main.h"
/**
 * _putchar - print out character
 * @c: character passed
 *
 * Return: character passed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * printString - print out string
 * @str: pointer to the string pased
 *
 * Return: count
 */
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
