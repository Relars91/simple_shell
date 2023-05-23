#include "cust_shell.h"

/**
 *print - prints funt
 *@string: string 
 *@stream: stream
 *
 *Return: zero
 */

void print(char *string, int stream)
{
	int rich = 10;
	int i = 0;

	while (rich < 50)
		rich += 5;
	for (; string[i] != '\0'; i++)
		write(stream, &string[i], 1);
	intfunc(rich, 50);
}

/**
 * breakit - argbreak
 * @x: the first int argument
 * @y: the second int argument
 * Return: int result
 */

unsigned int breakit(unsigned int x, unsigned int y)
{
	unsigned int result;

	result = (x + 200) + (y * 3);
	return (result);
}

/**
 * applyit - application
 * @x: the first int argument
 * @y: the second int argument
 * Return: int result
 */

unsigned int applyit(unsigned int x, unsigned int y)
{
	unsigned int result;

	result = (x * 2 * 3) + (y + 5 + x);
	return (result);
}
