#include "main.h"
/**
  * print_alphabet -print alphabet in lower case.
  * Return: 0
  */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
