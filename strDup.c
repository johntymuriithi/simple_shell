#include "main.h"
/**
 * my_strdup - copy the strings
 * @src: string to copy from
 *
 * Return: the new string
 */
char *my_strdup(char *src)
{

	size_t length = _strlen(src) + 1;

	char *dest = (char *)malloc(length);

	if (dest != NULL)
	{
		_strncpy(dest, src);
	}

	return (dest);
}
