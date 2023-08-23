#include "main.h"
<<<<<<< HEAD

<<<<<<< HEAD

int show(char *holder, char **av, char **argv, char *path, char **env)

=======
=======
/**
 * show - to run the execu function
 * @holder: it holds array of arguments
 * @av: array of arguments
 * @argv: arguments passed
 * @env: enviroment variable
 *
 * Return: status of the child procee
 */
>>>>>>> bfd225e04e0dc24aef574ad8319b49a6537771f8
int show(char *holder, char **av, char **argv, char **env)
>>>>>>> 64fafcbf367f34e73a6530246fa8909123fd86c2
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
		errno = 127;
		free(path);
		return (WEXITSTATUS(status));
	}
	return (0);
}
