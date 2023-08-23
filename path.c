#include "main.h"

char *location(char *path, char *arg)

{
	char *pathCpy, *pathToken, *filePath;
	char *delim = ":";

	pathCpy = my_strdup(path);
	pathToken = strtok(pathCpy, delim);
	while (pathToken != NULL)
	{
		filePath = malloc(_strlen(arg) + _strlen(pathToken) + 2);
		if (filePath != NULL)
		{
			_strncpy(filePath, pathToken);
			_strcat(filePath, "/");
			_strcat(filePath, arg);
			_strcat(filePath, "\0");
			if (access(filePath, X_OK) == 0)
			{
				free(pathCpy);
				return (filePath);
			}
			pathToken = strtok(NULL, delim);
		}
		free(filePath);
	}
	free(pathCpy);
	return (NULL);
}
char *get_Loc(char *arg)

{
	char *path;

	if (access(arg, X_OK) == 0)
	{
		return (my_strdup(arg));
	}
	path = getenv("PATH");
	if (path)
	{
		path = location(path, arg);
		return (path);
	}
	else
	{
		return (NULL);
	}
}
