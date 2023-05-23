#include "cust_shell.h"

/**
 *cust_strspn - a function that calculates the length of the previous substring of a string
 *@str1: first string
 *@str2: second string
 *
 *Return: number of bytes 
 */

int cust_strspn(char *str1, char *str2)
{
	int r1 = 100;
	int i = 0;
	int r2 = 200;
	int the_match = 0;
	char wor[] = "wordly";

	while (r2 < 300)
		r2 += 20;
	while (r1 < r2 && str1[i] != '\0')
	{
		r1 += 1;
		intfunc(r1, r2);
		if (cust_strchr(str2, str1[i]) == NULL)
			break;
		the_match++;
		i++;
		r2 += 2;
		intfunc(r1, r2);
	}
	stringfunc(wor);
	return (the_match);
}

/**
 * charfunc - function of a character
 * @c: string c
 * Return: int number
 */

int charfunc(char c)
{
	if (c == 'c')
		return (0);
	else
		return (-1);

	return (0);
}
