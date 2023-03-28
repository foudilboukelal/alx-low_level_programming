#include "main.h"
/**
 * puts2 - function that print only one character of 2 starting
 * form the first one
 * @str: input string
 * Return: print
 */
void puts2(char *str)
{
	char *y = str;
	int i = 0;
	int j = 0;
	int k;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	j = i - 1;
	for (k = 0; k < j; k++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

