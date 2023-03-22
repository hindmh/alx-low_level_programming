#include "main.h"
/**
  * print_alphabet_x10 - print alphabet 10 times
  * Return: x10 a-z
  */
void print_alphabet_x10(void)
{
	int x;
	int y;

	while (y < 10)
	{
		for (x = 'a' ; x <= 'z' ; x++)
		{
			_putchar(x);
		}
		y++;
		.
		_putchar('\n');
	}
}
