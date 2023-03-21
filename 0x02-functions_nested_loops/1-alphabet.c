#include "main.h"
/**
  * print_alphabet -print alphabet in lower case.
  * Return: 0
  */
void print_alphabet(void)
{
	int x;

	for (x = 97; x <= 127; x++)
	{
		_putchar(x);
	}
	_putchar(\n);
	return (0);
}
