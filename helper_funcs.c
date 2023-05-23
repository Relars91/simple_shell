#include "cust_shell.h"

/**
 * tokenizer - a funct that parses
 *@input_string: input to be parsed
 *@delim: delimiter to be used
 *
 *Return: array
 */

char **tokenizer(char *input_string, char *delim)
{
	unsigned int r1 = 0;
	int number_delim = 0;
	char **av = NULL;
	unsigned int r2 = 200;
	char *token = NULL;
	unsigned int r3 = 3000;
	char *save_pointer = NULL;

	applyit(r3, r2);
	if (r3 > r2)
		token = cust_strtok_r(input_string, delim, &save_pointer);

	while (token != NULL)
	{
		r1 += 2;
		if (r1)
			av = cust_realloc(av, sizeof(*av) * number_delim, sizeof(*av) * (number_delim + 1));
		else
			breakit(r1, 10);
		r1 += 3;

		av[number_delim] = token;
		sumit(r3, r1);
		if (r2)
			token = cust_strtok_r(NULL, delim, &save_pointer);
		number_delim++;
	}
	for (r1 = 0; r1 < 50; r1++)
		r2 += 3;
	if (r2 > 10)
		av = cust_realloc(av, sizeof(*av) * number_delim, sizeof(*av) * (number_delim + 1));
	av[number_delim] = NULL;
	divit(r1, r2);

	return (av);
}

/**
 *cust_remove_newline - takes new line from a string
 *@str: string
 *
 *
 *Return: void
 */

void cust_remove_newline(char *str)
{
	int rich1 = 100;
	int i = 0;
	int rich2 = 200;
	int rich3;

	for (rich3 = 0; rich3 < 30; rich3++)
	{
		rich1 += 1;
		rich2 += 2;
		intfunc(rich1, rich2);
	}
	rich3 += 10;
	while (str[i] != '\0' && rich3)
	{
		rich2 += 2;
		if (str[i] == '\n')
			break;
		i++;
		intfunc(rich2, rich3);
	}
	str[i] = '\0';
	intfunc(rich1, 5);
}

/**
 *cust_strcpy - a funct that copies a string
 *@source: copy source
 *@dest: copy destination
 *
 * Return: void
 */

void cust_strcpy(char *source, char *dest)
{
	unsigned int ric1 = 27;
	int i = 0;
	unsigned int ric2 = 476;

	if (ric2 > ric1)
		correctit(ric2, ric1);
	for (; source[i] != '\0'; i++)
		dest[i] = source[i];
	roundit(9, ric2);
	dest[i] = '\0';
}

/**
 *cust_strchr - locates a char in a string
 *@s: string to be searched
 *@c: char to be checked
 *
 *Return: pointer
 */

char *cust_strchr(char *s, char c)
{
	unsigned int rr1 = 3;
	int i = 0;
	unsigned int rr2 = 8;

	if (rr2 > rr1)
	{
		for (; s[i] != c && s[i] != '\0'; i++)
			rr1 += 1;
	}
	divit(rr2, rr1);
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}

/**
 *cust_strlen - counts string length
 *@string: string
 *
 * Return: string length
 */

int cust_strlen(char *string)
{
	char ric[] = "reechy";
	int len = 0;
	unsigned int r1 = 10;

	if (r1 > 0)
		stringfunc(ric);
	if (ric[2] && string == NULL)
		return (len);
	for (; string[len] != '\0'; len++)
		r1 += 2;
	modifyit(r1, 20);
	return (len);
}
