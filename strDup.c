#include "main.h"

char *my_strdup(char *src)
{

	size_t length = _strlen(src) + 1; 

	char *dest = (char *)malloc(length);

	if (dest != NULL) {
		_strncpy(dest, src);
	}

	return dest;
}
