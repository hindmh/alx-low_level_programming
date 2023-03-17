#include <stdio.h>
/**
  * main -entry point
  * Return: 0 (success)
  */
int main(void)
{
	int x = 97;
	int a = 65;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	while (a <= 90)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
