#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z'; ch++)
	{
		if ((ch != ch+5) && (ch != ch+17))
		{
			putchar(ch);
		}
	}
	putchar ('\n');
	return (0);
}
