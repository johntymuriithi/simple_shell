#include "main.h"

void err_msg(int fd, int num_cmd, char *s1, char *s2, char *s3)
{
	char num_stat;
	int temp = num_cmd;

	while (*s1)
	{
		write(fd, &(*s1), 1), s1++;
	}
	write(fd, ": ", 2);

	if (num_cmd < 10)
	{
		num_stat = num_cmd + '0';
		write(fd, &(num_stat), 1);
	}
	else
	{
		num_stat = (num_cmd / 10) + '0';
		write(fd, &(num_stat), 1);
		num_stat = (temp % 10) + '0';
		write(fd, &(num_stat), 1);
	}
	write(fd, ": ", 2);

	while (*s2)
		write(fd, &(*s2), 1), s2++;

	write(2, ": ", 2);

	while (*s3)
		write(fd, &(*s3), 1), s3++;

	write(fd, "\n", 1);
}

void err_mg(int fd, int num_cmd, char *s1, char *s2, char *s3, char *s4)
{
	char num_stat;
	int temp = num_cmd;

	while (*s1)
	{
		write(fd, &(*s1), 1), s1++;
	}
	write(fd, ": ", 2);

	if (num_cmd < 10)
	{
		num_stat = num_cmd + '0';
		write(fd, &(num_stat), 1);
	}
	else
	{
		num_stat = (num_cmd / 10) + '0';
		write(fd, &(num_stat), 1);
		num_stat = (temp % 10) + '0';
		write(fd, &(num_stat), 1);
	}
	write(fd, ": ", 2);
	while (*s2)
		write(fd, &(*s2), 1), s2++;

	write(2, ": ", 2);
	while (*s3)
		write(fd, &(*s3), 1), s3++;

	while (*s4)
		write(fd, &(*s4), 1), s4++;
	write(fd, "\n", 1);
}
