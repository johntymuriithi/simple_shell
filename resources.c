#include "main.h"
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
char **strTok(char *holder, char **argv)

{
	int j = 0;
	char *delim = " \n";

	argv[j] = strtok(holder, delim);
	while (holder[j])
	{
		j++;
		argv[j] = strtok(NULL, delim);
	}
	argv[j] = NULL;
	return (argv);
}
void exitFunction(char *holder, char **av, char **argv)

{
	int count = 1, i;
<<<<<<< HEAD

=======
>>>>>>> 64fafcbf367f34e73a6530246fa8909123fd86c2
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
				int status = _atoi(argv[1]);

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
int checker(char *holder)

{
	int isEmpty = 1, i;
<<<<<<< HEAD

=======
>>>>>>> 64fafcbf367f34e73a6530246fa8909123fd86c2
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
