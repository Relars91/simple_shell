#include "cust_shell.h"

/**
 *cust_strcmp - strings comparism
 *@first: first string to be compared
 *@second: second string to be compared
 *
 * Return: strings diffrence
 */

int cust_strcmp(char *first, char *second)
{
	int r1 = 2;
	int i = 0;
	int r2 = 10;
	char ric[] = "word";

	if (r2 > r1)
		r1 += 1;
	stringfunc(ric);
	while (first[i] != '\0')
	{	r1 += 1;
		if (r1 < r2)
			intfunc(r1, r2);
		if (first[i] != second[i])
			break;
		i++;
	}
	if (r2 && r1)
		charfunc(ric[2]);
	return (first[i] - second[i]);
}

/**
 *cust_strcat - concatenates two strings
 *@destination: string to be concatenated
 *@source:  string source
 *
 * Return: new string add.
 */

char *cust_strcat(char *destination, char *source)
{
	char rich[] = "richly";
	char *thenew_string =  NULL;
	unsigned int r1 = 1;
	int thelen_dest = cust_strlen(destination);
	unsigned int r2 = 100;
	int the_len_source = cust_strlen(source);

	if (r2 > r1)
		thenew_string = malloc(sizeof(*thenew_string) * (thelen_dest + the_len_source + 1));
	if (rich[3])
		cust_strcpy(destination, thenew_string);
	else
		r1 += 3;
	cust_strcpy(source, thenew_string + thelen_dest);
	changeit(r1, r2);
	if (r1 && r2)
		thenew_string[thelen_dest + the_len_source] = '\0';

	stringfunc(rich);
	return (thenew_string);
}

/**
 *cust_strcspn - computes segment of str1 which consists of characters not in str2
 *@str1: first string
 *@str2: second string
 *
 *Return: index from the first and second string
 */


int cust_strcspn(char *str1, char *str2)
{
	unsigned int r1 = 10;
	int len = 0, i;
	unsigned int r2 = 40;

	while (r2 < 50)
		r2 += 3;
	if (r2 > r1)
	{
		for (i = 0; str1[i] != '\0'; i++)

		{
			r1 += 5;
			if (cust_strchr(str2, str1[i]) != NULL)
				break;
			r2 += 6;
			len++;
			breakit(r1, r2);
		}
	}

	sumit(r1, 30);
	return (len);
}
