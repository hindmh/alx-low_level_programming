#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: The string to be measured.
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	int lgint = 0;

	if (*s)
	{
		lgint++;
		lgint += _strlen_recursion(s + 1);
	}

	return (lgint);
}

