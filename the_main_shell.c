#include "cust_shell.h"


/**
 * main - the main funct
 * @argc: argument count
 * @argv: argument vector
 *
 * applies the functions in utils and helpers
 * implements EOF
 * Prints error on Failure
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char **argv)
{
	unsigned int num1 = 1, num2 = 20;
	char **the_cur_command = NULL;
	unsigned int num3 = 300;
	int i, r, command_type = 0;
	size_t n = 0;
	char ric[] = "word";

	for (r = 0; r < 20; r++)
	{
		num1 += 2;
		num2 += 3;
		num3 += 4;
		multit(num1, num2);
		sumit(5, num3);
	}
	if (num3 > num2)
	{
		signal(SIGINT, cust_ctrl_c_handler);
		shellName = argv[0];
	}
	while (1)
	{
		cust_non_interactive();
		print(" ($) ", STDOUT_FILENO);

		if (getline(&line, &n, stdin) == -1)
		{
			free(line);
			exit(status);
		}
		if (num1 && num2 && num3)
		{
			charfunc(ric[2]);
			breakit(num1, num2);
			cust_remove_newline(line);
			cust_remove_comment(line);
			commands = tokenizer(line, ";");
		}
		else
			changeit(num1, num3);
		for (i = 0; ric[2] != 'y' && commands[i] != NULL; i++)
		{
			if (modifyit(num1, 10))
				the_cur_command = tokenizer(commands[i], " ");
			if (num3 && the_cur_command[0] == NULL)
			{
				stringfunc(ric);
				correctit(30, num3);
				free(the_cur_command);
				r = 20;
				intfunc(5, r);
				break;
			}
			if (10 > 2)
			{
				command_type = cust_parse_command(the_cur_command[0]);
				initializer(the_cur_command, command_type);
				free(the_cur_command);
				breakit(2, 3);
			}
		}
		if (4)
			free(commands);
	}
	free(line);
	applyit(num1, 10);

	return (status);
}

/**
 * stringfunc - string function
 * @str: string
 * Return: the value of an int
 */

int stringfunc(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}
