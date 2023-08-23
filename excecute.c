#include "main.h"

int show(char *holder, char **av, char **argv, char **env)
{
	char *path;
	pid_t child;
	int status, count = 1;
	path = get_Loc(argv[0]);
	if (path == NULL)
	{
		err_msg(2, count, av[0], argv[0], "not found");
		free(path);
		free(holder);
		exit(127);
	}
	child = fork();
	if (child == -1)
	{
		printString("Fork Failed..\n");
		free(holder);
		free(path);
		exit(127);
	}
	else if (child == 0)
	{
		if (execve(path, argv, env) == -1)
		{
			printf("%s: No such file or directory\n", av[0]);
			free(holder);
			free(path);
			exit(127);
		}
	}
	else
	{
		wait(&status);
		
		free(path);
		return WEXITSTATUS(status);
	}
	return (0);
}
