#include "main.h"
/**
 * _strlen_recursion - function that returns the length of the string
 * @s: input string
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	int size = 0;

	if (*s)
	{
		size++;
		size += _strlen_recursion(s + 1);
	}
	return (size);
}
