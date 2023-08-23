#ifndef MAIN_H
#define MAIN_H

#define MAX_ARGS 20

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <ctype.h>
#include <limits.h>


int _strcmp(char *s1, char *s2);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncpy(char *dest, char *src);
size_t _strlen(const char *str);
int _isdigit(int x);
int _isspace(char c);
char *my_strdup(char *src);


char *get_Loc(char *arg);
char *location(char *path, char *arg);
int printString(char *str);
int _putchar(char c);
int show(char *holder, char **av, char **argv, char **env);
int checker(char *holder);
char **strTok(char *holder, char **argv);
char *removerLine(char *holder);
void exitFunction(char *holder, char **av, char **argv);
void err_msg(int fd, int num_cmd, char *s1, char *s2, char *s3);
int displayEnv(char **argv, char **env);


void find_str(char *argv, char **av);

void err_mg(int fd, int num_cmd, char *s1, char *s2, char *s3, char *s4);

#endif
