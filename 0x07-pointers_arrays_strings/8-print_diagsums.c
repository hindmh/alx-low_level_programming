#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: return 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int x1, x2, y;

	x1 = 0;
	x2 = 0;

	for (y = 0; y < size; y++)
	{
		x1 = x1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		x2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", x1, x2);
}

