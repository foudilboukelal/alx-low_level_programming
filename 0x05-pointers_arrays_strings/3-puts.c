#include "main.h"
/**
 * _puts - a function that prints a string followed by new line
 *
 * @str: string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
