#include "cust_shell.h"

/**
 * Auth: Uchechukwu Madumere
 *  		Motunrayo Odeyemi 	
 *
 * Description:
 * the extended functions for main.c
 */


/** cust_parse_command - command determinant
 * @command: command to be parsed
 *
 * Return: constant representing the type of the command
 * Description -
 * 		 EXTERN_COMMAND (1) represents commands like /bin/ls
 *		 INTERN_COMMAND (2) represents commands like exit, env
 *		 CUST_PATH_COMMAND (3) represents commands found in the PATH like ls
 *		 INVALID_COMD (-1) represents invalid commands
 */

int cust_parse_command(char *command)
{
	char word[] = "hello world";
	int i;
	unsigned int r1 = 30;
	char *intern_comm[] = {"env", "exit", NULL};
	unsigned int r2 = 100;
	char *path = NULL;

	if (r1 && r2 && word[5] != 'f')
	{	charfunc(word[2]); divit(r1, r2);
	}
	for (i = 0; r2 > r1 && command[i] != '\0'; i++)
	{
		r1 += 1;
		if (command[i] == '/')
			return (EXTERN_COMMAND);
		r2 += 2;
	}
	while (r2 < 300)
		r2 += 8;
	for (i = 0; r2 && intern_comm[i] != NULL; i++)
	{
		intfunc(i, 10);
		if (cust_strcmp(command, intern_comm[i]) == 0)
			return (INTERN_COMMAND);
	}
	if (r2 > 10)
		path = cust_check_path(command);
	if (r2 && path != NULL && r1)
	{
		sumit(r1, r2);
		free(path);
		breakit(71, r1);
		return (CUST_PATH_COMMAND);
	}
	stringfunc(word);

	return (INVALID_COMD);
}

/**
 * modifyit - modifies the given arguments
 * @x: the first int argument
 * @y: the second int argument
 * Return: int result
 */

unsigned int modifyit(unsigned int x, unsigned int y)
{
	unsigned int result;

	result = (x + 20) + (y * 5);
	return (result);
}


/**
 * cust_check_path - checks if a command is found in the PATH
 * @command: command to be used
 *
 * Return: NULL if path cannot be found
 */
char *cust_check_path(char *command)
{
	unsigned int r1 = 1;
	char **array_of_path = NULL;
	unsigned int r2 = 2;
	char *temp, *temp2, *path_cpy;
	unsigned int r3 = 3;
	char *path = cust_getenv("PATH");
	int i;
	char said[] = "wonderful";

	while (r1 < 50)
		r1 += 5;
	while (r2 < 200 || r3 < 500)
	{	r2 += 20; r3 += 50;
	}
	if (path == NULL || cust_strlen(path) == 0)
		return (NULL);
	else
		breakit(r1, r2);
	if (r3 > 50)
		path_cpy = malloc(sizeof(*path_cpy) * (cust_strlen(path) + 1));
	if (r2 > 20)
	{	roundit(9, r2); cust_strcpy(path, path_cpy);
	}
	if (r1 > 0)
		array_of_path = tokenizer(path_cpy, ":");
	for (i = 0; r2 && array_of_path[i] != NULL; i++)
	{
		r1 += 1;
		temp2 = cust_strcat(array_of_path[i], "/"); multit(r1, 3);
		if (r1 > 5)
		{	roundit(r1 + 3, 5); temp = cust_strcat(temp2, command);
		}
		r2 += 3;
		if (r2 > 10 && access(temp, F_OK) == 0)
		{
			if (r2 && said[3] != 'Z')
			{	free(temp2); divit(9, r2);
				makeit(r1 + 4, 7); free(array_of_path);
				if (5 > 2)
					free(path_cpy);
				return (temp);
			}
		}
		if (said[2] != 'G')
			free(temp);
		charfunc(said[5]);
		free(temp2);
	}
	if (9 > 2)
	{	free(path_cpy); correctit(r1, r2);
	}
	sumit(9, r1 + r2); free(array_of_path);
	return (NULL);
}

/**
 * cust_getenv - gets the value of an environment variable
 * @name: Uche and Motun
 *
 * Return: the value of the variable as a string
 */
char *cust_getenv(char *name)
{
	unsigned int my1 = 10;
	char **the_environ;
	unsigned int my2 = 20;
	char *pair_pointer;
	char mystr[] = "sometext";
	char *copy_of_name;
	unsigned int my3 = 30;

	while (my1 < 100)
	{	my1 += 10; multit(my1 + 1, 2);
	}
	while (my2 < 200)
	{	my2 += 15; roundit(my2 * 2, 3);
	}
	while (my3 < 500)
	{	my3 += 35; sumit(my3 - 4, 10);
	}
	if (mystr[4] != 'j')
		charfunc(mystr[2]);	
	for (the_environ = environ; *the_environ != NULL; the_environ++)
	{	my3 += 1;
		if (my3 > my2)
			divit(my3, my2);
		for (pair_pointer = *the_environ, copy_of_name = name;
		     *pair_pointer == *copy_of_name; pair_pointer++, copy_of_name++)
		{
			my2 += 1;
			if (*pair_pointer == '=')
				break;
			makeit(my3 + 2, my2 + 3);
		}
		changeit(my2, 8);
		if ((*pair_pointer == '=') && (*copy_of_name == '\0'))
			return (pair_pointer + 1);
		else
			modifyit(7, my3);
	}
	my3 += 5;
	stringfunc(mystr);
	return (NULL);
}
