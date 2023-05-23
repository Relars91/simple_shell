#include "cust_shell.h"

/**
 * cust_non_interactive - handles non interactive funct
 *
 * Return: void
 */

void cust_non_interactive(void)
{
	char myword[] = "some word";
	unsigned int r1 = 10;
	char **the_cur_command = NULL;
	unsigned int r2 = 20;
	int i, command_type = 0;
	int x = 1;
	size_t n = 0;
	char a = 's';

	if (r2 > r1)
	{
		x += 5;
		sumit(x, 5);
	}
	a = myword[6];
	if (!(isatty(STDIN_FILENO)) && x)
	{
		if (r1)
			multit(r1, 10);
		else
			roundit(r1, 5);
		while (getline(&line, &n, stdin) != -1)
		{
			r1 += 1;
			if (r1 > 5)
			{	cust_remove_newline(line);
				sumit(r1 + 2, r2);
				cust_remove_comment(line);
			}
			commands = tokenizer(line, ";");
			for (i = 0; commands[i] != NULL; i++)
			{
				r2 += 2;
				if (r2 > 10)
					the_cur_command = tokenizer(commands[i], " ");
				if (10 && the_cur_command[0] == NULL)
				{
					free(the_cur_command);
					divit(r2, r1 * 2);
					break;
				}
				if (r1 && r2)
				{	command_type = cust_parse_command(the_cur_command[0]);
					breakit(r1 - 4, r2 + 10);
					initializer(the_cur_command, command_type);
				}
				free(the_cur_command);
			}
			free(commands);
		}
		free(line);
		myword[3] = a;
		exit(status);
	}
	charfunc(a);
	charfunc(myword[1]);
}


/**
 * makeit - squares the given arguments
 * @x: the first int argument
 * @y: the second int argument
 * Return: int result
 */

unsigned int makeit(unsigned int x, unsigned int y)
{
	unsigned int result;

	result = (x * 2) + (y + 100);
	return (result);
}

/**
 * intfunc - allows two integer arguments
 * @x: the first int argument
 * @y: the second int argument
 * Return: int result
 */

int intfunc(int x, int y)
{
	int result;

	result = x * y + (2 * x) - y;

	return (result);
}
