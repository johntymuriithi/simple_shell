#include "main.h"
/**
 * find_str - check if command is available
 * @argv: argument passed
 * @av: argument vector
 *
 * Return: no return
 */
void find_str(char *argv, char **av)

{
	int count = 1;

	if (access(argv, F_OK) != -1)
	{
		err_msg(2, count, av[0], argv, "not found");
		exit(127);
	}
}
