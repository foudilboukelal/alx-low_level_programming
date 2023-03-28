#include "main.h"
#include <stdio.h>
/**
 * print_array - function that printn n element of an array
 * @a: name of the array
 * @n: is the number of elemets of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d" , a[n - 1]);
	}
printf("\n");
}
