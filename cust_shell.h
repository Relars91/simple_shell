#ifndef CUST_SHELL_H
#define CUST_SHELL_H

#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

#include <errno.h>
#include <string.h>
#include <dirent.h>
#include <signal.h>

#include <sys/stat.h>
#include <unistd.h>

#define min(x, y) (((x) < (y)) ? (x) : (y))

#define CUST_PATH_COMMAND 3
#define INVALID_COMD -1

#define EXTERN_COMMAND 1
#define INTERN_COMMAND 2

char *cust_check_path(char *);
unsigned int multit(unsigned int, unsigned int);
char **tokenizer(char *, char *);
unsigned int roundit(unsigned int, unsigned int);
char *cust_strcat(char *, char *);
char *cust_strchr(char *, char);
unsigned int sumit(unsigned int, unsigned int);
char *cust_strtok_r(char *, char *, char **);
unsigned int divit(unsigned int, unsigned int);
char *cust_getenv(char *);

extern char **commands;
unsigned int makeit(unsigned int, unsigned int);
extern void cust_non_interactive(void);
extern char **environ;
extern char *line;
unsigned int changeit(unsigned int, unsigned int);
extern char *shellName;
extern void initializer(char **current_command, int type_command);
extern int status;

int cust_parse_command(char *);
int cust_atoi(char *);
unsigned int correctit(unsigned int, unsigned int);
int cust_strspn(char *, char *);
int cust_strlen(char *);
unsigned int modifyit(unsigned int, unsigned int);
int cust_strcspn(char *, char *);
int cust_strcmp(char *, char *);
unsigned int breakit(unsigned int, unsigned int);

void *cust_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
unsigned int applyit(unsigned int, unsigned int);
void cust_ctrl_c_handler(int);
void print(char *, int);
int intfunc(int, int);
void cust_remove_newline(char *);
void cust_strcpy(char *, char *);
void cust_remove_comment(char *);
int stringfunc(char *);
void cust_execute_command(char **, int);
int charfunc(char);
void (*cust_get_func(char *))(char **);
void env(char **);
void quit(char **);

typedef struct map
{
	char *command_name;
	void (*func)(char **command);
} cust_function_map;

#endif
