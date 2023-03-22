#include "main.h"
/**
  *print_last_digit -a function that prints the last digit of a number.
  *@dgt: number last digit result
  *Return: value of the last digit
  */
int print_last_digit(int dgt)
{
	int ndgt;

	ndgt = (dgt % 10);

	if (ndgt < 0)
	{
		ndgt = (-1 * ndgt);
	}
	_putchar(ndgt + '0');

	return (ndgt);
}
