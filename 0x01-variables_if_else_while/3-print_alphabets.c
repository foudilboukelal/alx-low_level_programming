#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMOPQRSTUVWXYZ";
	int i;

	for (i = 0 ; i <= 52 ; i++)
	{
	putchar(alph[i]);
	}
	putchar("\n");
	return (0);
}
