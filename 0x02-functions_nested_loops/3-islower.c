#include "main.h"

/**
 * _islower - function that checks for alphabet caracter
 *@c: single letter input
 *
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise 0'
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
