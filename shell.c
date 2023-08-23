#include "main.h"


int main(int ac, char **av, char **env)
{
	int isEmpty, exitStatus, charNo;
	char *prompt = "(Shell)$ ", *holder = NULL, *argv[12];
	size_t size = 0;
	(void)ac;

	while (1)
	{
		if (isatty(STDIN_FILENO)){
				printString(prompt);}
				charNo = getline(&holder, &size, stdin);
				if (charNo == -1)
				{
				free(holder);
				exit(0);
				}
				holder = removerLine(holder);
				isEmpty = checker(holder);
				if (isEmpty)
				continue;
				strTok(holder, argv);

				if (argv[0][0] != '/' && argv[0][0] != '.' && argv[1] == NULL && access(argv[0], F_OK) != -1)
				{
				find_str(argv[0], av);
				}

				if (_strcmp(argv[0], "exit") == 0)
				exitFunction(holder, av, argv);

				if (_strcmp(argv[0], "env") == 0)
				{
					if (displayEnv(argv, env))
						continue;
				}
				exitStatus = show(holder, av, argv, env);
				if (exitStatus == 2)
				{
					free(holder);
					exit(2);
				}
	}
	free(holder);
	return (0);
}
