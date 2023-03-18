#include <stdio.h>
/**
  * main -entry wpoint
  * Return:0 (success)
  */
int main(void)
{
	int x = 122;

	while (x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
