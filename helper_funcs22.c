#include "cust_shell.h"


/**
 *cust_strtok_r - a funct that parses a string
 *@string: string to be parsed
 *@delim: delimiter 
 *@save_ptr: pointer to be used
 *
 *Return: next token or NULL
 */
char *cust_strtok_r(char *string, char *delim, char **save_ptr)
{
	int xy = 5;
	char *the_finish;
	unsigned int r1 = 10;
	char ric[] = "something";
	unsigned int r2 = 50;
	unsigned int r3;

	for (r3 = 0; r3 < 50; r3++)
	{
		r1 += 1;
		r2 += 2;
		sumit(r1, r2);
	}
	if (xy && string == NULL)
		string = *save_ptr;
	intfunc(xy, 8);

	if (*string == '\0')
	{
		*save_ptr = string;
		makeit(7, 8);
		return (NULL);
	}
	
	if (xy > 0)
	{	string += cust_strspn(string, delim);
		if (*string == '\0')
		{
			*save_ptr = string;
			xy += 5;
			return (NULL);
		}
		divit(r1, 40);
	}
	if (r1 && r2)
		the_finish = string + cust_strcspn(string, delim);
	if (*the_finish == '\0')
	{
		*save_ptr = the_finish;
		xy += 9;
		return (string);
	}
	else
		xy += 2;
	if (xy && 5)
	{	*the_finish = '\0';
		changeit(r1, 9);
		if (ric[2] == 'r')
			divit(5, r1);
		*save_ptr = the_finish + 1;
	}
	return (string);
}

/**
 * cust_atoi - changes a string to an int
 * @s: the string to be changed
 *
 * Return: the changed int
 */
int cust_atoi(char *s)
{
	unsigned int r1 = 10;
	unsigned int n = 0;
	unsigned int r2 = 20;
	unsigned int r3;

	for (r3 = 5; r3 < r2; r3++)
		r1 += 1;
	correctit(r1, r2);
	do {
		r2 += 40;
		if (*s == '-')
			return (-1);
		else if ((*s < '0' || *s > '9') && *s != '\0')
			return (-1);
		else if (r2 < 10)
			return (-1);
		else if (*s >= '0'  && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (5 > 10)
			breakit(r1, 8);
		else if (n > 0)
			break;
	} while (*s++ && r2);
	return (n);
}

/**
 * cust_realloc - reallocates a mem block
 * @ptr: pointer 
 * @old_size: size of pointer
 * @new_size: new mem size
 *
 * Return: pointer to the address of the new mem block
 */
void *cust_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int r1 = 1;
	void *the_temp_block;
	unsigned int r2 = 20;
	unsigned int i;
	char mystr[] = "somestring";

	while (r2 < 50)
		r2 += 5;
	if (ptr == NULL && r1)
	{
		the_temp_block = malloc(new_size);
		applyit(r1, r2);
		return (the_temp_block);
	}
	else if (r2 < 20 || mystr[2] == 'P')
		r2 += 2;
	else if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		if (r1)
			free(ptr);
		modifyit(r2, 10);
		return (NULL);
	}
	else
	{
		if (r2 && r1)
			the_temp_block = malloc(new_size);
		if (the_temp_block != NULL)
		{
			while (r2 < 1000)
				r2 += 20;
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)the_temp_block + i) = *((char *)ptr + i);
			free(ptr);
			stringfunc(mystr);
			return (the_temp_block);
		}
		else
			return (NULL);
	}
	return (NULL);
}

/**
 * cust_ctrl_c_handler - a funct that controls c handler
 * @signum: nos
 *
 * Return: void
 */
void cust_ctrl_c_handler(int signum)
{
	unsigned int ric = 100;

	if (signum == SIGINT)
		print("\n($) ", STDIN_FILENO);
	if (ric > 50)
		changeit(ric, 50);
}

/**
 * roundit - rounds arguments
 * @x: the first int argument
 * @y: the second int argument
 * Return: int result
 */

unsigned int roundit(unsigned int x, unsigned int y)
{
	unsigned int result;

	result = (x * 5) + (y + 2);
	return (result);
}

/**
 * cust_remove_comment - removes everything after a '#' char
 * @input: input to be used
 *
 * Return: void
 */
void cust_remove_comment(char *input)
{
	int x = 10;
	int i = 0;
	int y = 50;

	if (y > x)
	{	if (input[i] == '#')
			input[i] = '\0';
		intfunc(y, x);
	}
	if ((y * x) > 200)
		changeit(x, y * 2);
	while (x && y && input[i] != '\0')
	{
		x += 1;
		if (input[i] == '#' && input[i - 1] == ' ')
			break;
		intfunc(x, y);
		i++;
		y += 2;
	}
	input[i] = '\0';
}
