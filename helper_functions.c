#include "main.h"
/**
 * _atoi - Convert a string to an integer.
 *@s: The pointer to convert
 *Return: An integer
 */
int _atoi(char *s)

{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (isi == 1)
		{
			break;
		}
		c++;
	}
	ni *= min;
	return (ni);
}
/**
 * _strcmp - compare string values
 * @s1: A pointer to the first string to be compaired
 * @s2: A pointer to the second string to be compaired
 * Return: if strl < strl2, the negative difference of
 * the first unmatched characters.
 * if strl == strl, 0.
 * if strl > strl2, the positive difference of the first unmatched characters
 */
int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/**
 * _strcat -  concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)

{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
/**
 * _strncpy - copy one string to another
 * @dest: string to where to be copied
 * @src: string to be copied
 *
 * Return: new string
 */
char *_strncpy(char *dest, char *src)

{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
/**
 * _strlen - find the length of a string
 * @str: string invloved
 *
 * Return: the length
 */
size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
