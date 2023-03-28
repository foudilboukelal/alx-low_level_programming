#include "main.h"
/**
 * print_rev - print a string in reverse
 *
 * @s: a string to print
 */
void print_rev(char *s)
{
	int i;
	int j = 0;

	while (*s != '\0')
	{
		j++;
		s++;
	}
	s--;
	for (i = j; i > 0; i++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
