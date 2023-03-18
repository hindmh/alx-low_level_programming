#include <stdio.h>
/**
  * main -entry point
  * Return: 0 (seccess)
  */
int main(void)
{
	int n;
	int x;

	for (n = 48 ; n <= 57 ; n++)
	{
		putchar(n);
	}
	for (x = 97 ; x <= 102 ; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

