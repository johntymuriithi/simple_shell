#include "main.h"
/**
 * removerLine - remove end line
 * @holder: array of arguments
 *
 * Return: holder
 */
char *removerLine(char *holder)

{
	int i = 0;

	while (holder[i])
	{
		if (holder[i] == '\n')
		{
			holder[i] = '\0';
		}
		i++;
	}
	return (holder);
}
/**
 * strTok - tokenize the arguments
 * @holder: arguments passed
 * @argv: holds the command
 *
 * Return: argv
 */
char **strTok(char *holder, char **argv)

{
	int j = 0;
	char *delim = " \n";

	argv[j] = strtok(holder, delim);

	while (argv[j] && j < MAX_ARGS - 1)
	{
		j++;
		argv[j] = strtok(NULL, delim);
	}

	return (argv);
}
/**
 * exitFunction - hadle the exit function
 * @holder: array of the arguments passed
 * @av: argument vector
 * @argv: command passed
 *
 * Return: no return
 */
void exitFunction(char *holder, char **av, char **argv)
{
	int count = 1, i, status;

	if (argv[0] != NULL)
	{
		if (argv[1] != NULL)
		{
			for (i = 0; argv[1][i] != '\0'; i++)
			{
				if (!_isdigit(argv[1][i]))
				{
					err_mg(2, count, av[0], argv[0], "Illegal number: ", argv[1]);
					free(holder);
					exit(2);
				}
			}
			if (_atoi(argv[1]) < 0)
			{
				err_mg(2, count, av[0], argv[0], "Illegal number: ", argv[1]);
				free(holder);
				exit(2);
			}
			if (_atoi(argv[1]))
			{
				status = _atoi(argv[1]);
				free(holder);
				exit(status);
			}
		}
		else
		{
			free(holder);
			exit(0);
		}
	}
}
/**
 * displayEnv - display the env variable
 * @argv: command passed
 * @env: envrioment variable
 *
 * Return: 1 if found
 */
int displayEnv(char **argv, char **env)

{
	if (argv[0] != NULL)
	{
		if (_strcmp(argv[0], "env") == 0)
		{
			char **envPtr = env;

			while (*envPtr != NULL)
			{
				printString(*envPtr);
				_putchar('\n');
				envPtr++;
			}
			return (1);
		}
	}
	return (0);
}
/**
 * checker - check if any spacec entered
 * @holder: arguments passed
 *
 * Return: -1 if found
 */
int checker(char *holder)

{
	int isEmpty = 1, i;

	for (i = 0; holder[i]; i++)
	{
		if (!_isspace((unsigned char)holder[i]))
		{
			isEmpty = 0;
			break;
		}
	}
	return (isEmpty);
}
