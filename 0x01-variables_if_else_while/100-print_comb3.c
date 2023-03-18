#include <stdio.h>
/**
  * main -entry point
  * Return: 0 (success)
  */
int main(void)
{
	int n;
	int x;

	for (n = 48 ; n <= 56 ; n++)
	{
		for (x = 49 ; x <= 57 ; x++)
		{
			if (x > n)
			{
				putchar(n);
				putchar(x);
				if (n != 56 || x != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

