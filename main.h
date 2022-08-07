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
/*helpers*/
int str_len(char *str);
void double_free(char **to_be_freed);
void single_free(int n, ...);
void error_printing(char *av, int count, char *command);
void exec_error(char *av, int count, char *tmp_command);

/*number.c*/
int print_number(int n);


/*hbtlib*/
int _strcmp(char *s1, char *s2);
char *_strdup(char *src);
void print_str(char *str, int new_line);
int _write_char(char c);

/*path*/
char *path_finder(char *command);
int find_path(char *str);
char **tokenize_path(int index, char *str);
char *search_directories(char **path_tokens, char *command);
char *build_path(char *directory, char *command);

/*builtins*/
void cd_b(char *line);
void env_b(__attribute__((unused))char *line);
void exit_b(char *line);
void (*check_built_ins(char *str))(char *str);
int built_in(char **command, char *line);

#endif
