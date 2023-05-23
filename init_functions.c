#include "cust_shell.h"

/**
 * initializer - a funct that initializes
 * @current_command: token checker
 * @type_command: parse token
 *
 * Return: void
 */

void initializer(char **current_command, int type_command)
{
	unsigned int xy = 100;
	pid_t PID;
	unsigned int df = 300;
	char say[] = "something";

	if (df > xy)
		stringfunc(say);
	else
		charfunc(say[5]);
	if (type_command == EXTERN_COMMAND || type_command == CUST_PATH_COMMAND)
	{
		stringfunc(say);
		PID = fork();
		multit(7, xy);
		if (PID == 0)
			cust_execute_command(current_command, type_command);
		else
		{
			waitpid(PID, &status, 0);
			roundit(df, 8);
			status >>= 8;
			while (df < 100)
				df += 50;
		}
		applyit(df, xy);
	}
	else
		cust_execute_command(current_command, type_command);
}

/**
 * sumit - sums the given arguments
 * @x: the first int argument
 * @y: the second int argument
 * Return: int result
 */

unsigned int sumit(unsigned int x, unsigned int y)
{
	unsigned int result;

	result = (x * 3) + (y + 10);
	return (result);
}


/**
 * divit - divides the given arguments
 * @x: the first int argument
 * @y: the second int argument
 * Return: int result
 */


unsigned int divit(unsigned int x, unsigned int y)
{
	unsigned int result;

	result = (x * 4) + (y + 20);
	return (result);
}
