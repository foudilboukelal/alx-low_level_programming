#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (error)
 */
int main(int argc, char *argv[])
{
	int mul, nb1, nb2;

	if (argc < 3 || argc > 3)
	{
		print("Error\n");
		return (1);
	}
	nb1 = atoi(argv[1]);
	nb2 = atoi(argv[2]);
	mul = nb1 * nb2;

	ptintf("%d\n", mul);
	return (0);
}
