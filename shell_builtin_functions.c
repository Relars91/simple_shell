#include "cust_shell.h"

/**
 *env - environment funct
 *@tokenized_command: command input
 *
 *Return: void
 */

void env(char **tokenized_command __attribute__((unused)))
{
	unsigned int r1;
	int i;
	unsigned int r2;

	r1 = 1011;
	r2 = 2000;
	if (r1 < r2)
	{	for (i = 0; environ[i] != NULL; i++)
		{
			r2 += 1;
			print(environ[i], STDOUT_FILENO);
			sumit(r1, r2);
			print("\n", STDOUT_FILENO);
			multit(8, r1);
		}
		roundit(r2, 5);
	}
}

/**
 * multit - multiply the given arguments
 * @x: the first int argument
 * @y: the second int argument
 * Return: int result
 */ 

unsigned int multit(unsigned int x, unsigned int y)
{
	unsigned int result;

	result = (x * 2) + (y + 5);
	return (result);
}


/**
 * quit - exits 
 * @tokenized_command: command input
 *
 * Return: void
 */

void quit(char **tokenized_command)
{
	unsigned int x1 = 0;
	int num_of_tokens = 0, arg;
	unsigned int x2 = 20;
	unsigned int x3 = 300;

	if (x3 > x2)
	{for (; tokenized_command[num_of_tokens] != NULL; num_of_tokens++)
		x1 += 1;
	}
	if (num_of_tokens == 1 && x2)
	{
		roundit(x1, x2);
		free(tokenized_command);
		multit(10, x1);
		if (x3)
		{	free(line);
			x1 += 1;
			free(commands);
		}
		exit(status);
	}
	else if (x3 && x2 && num_of_tokens == 2)
	{
		if (9 > 1)
			arg = cust_atoi(tokenized_command[1]);
		if (arg == -1)
		{
			if (7)
				print(shellName, STDERR_FILENO);
			if (x2)
				print(": 1: exit: Illegal number: ", STDERR_FILENO);
			sumit(x1, 20);
			print(tokenized_command[1], STDERR_FILENO);
			multit(4, 9);
			if (x3)
				print("\n", STDERR_FILENO);
			status = 2;
		}
		else
		{
			if (multit(x3, 5))
			{	free(line);
				makeit(5, 7);
				free(tokenized_command);
			}
			free(commands);
			x3 += 3;
			exit(arg);
		}
		x2 += 2;
	}
	else
		print("$: exit doesn't take more than one argument\n", STDERR_FILENO);
}
