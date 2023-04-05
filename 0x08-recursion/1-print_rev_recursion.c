#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: input string
 * Return: always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}