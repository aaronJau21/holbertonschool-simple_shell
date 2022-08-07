#ifndef _shell_
#define _shell_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <stdarg.h>
#include <signal.h>
#define PROMPT "shell $"

/**
 * struct builtin_d - Defines the builtins functions.
 * @built: The name of the build in command.
 * @f: A pointer to the right builtin function.
 */
typedef struct builtin_d
{
	char *built;
	void (*f)(char *);
} builtin_t;

extern char **environ;

/*funtcions*/
void panalysis_line(char *line, size_t size, int command_counter, char **av);
void create_child(char **param_array, char *line, int count, char **av);
char **token_interface(char *line, const char *delim, int token_count);
char **tokenize(int token_count, char *line, const char *delim);
int count_token(char *line, const char *delim);
