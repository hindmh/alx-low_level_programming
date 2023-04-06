#include "main.h"

int pal(char *s, int x, int leng);
int length(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal(s, 0, length(s)));
}

/**
 * length - returns the length of a string
 * @s: string to calculate the length of
 * Return: length of the string
 */
int length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + length(s + 1));
}

/**
 * pal - checks the characters recursively for palindrome
 * @s: string to check
 * @x: iterator
 * @leng: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int pal(char *s, int x, int leng)
{
	if (*(s + x) != *(s + leng - 1))
		return (0);
	if (x >= leng)
		return (1);
	return (pal(s, x + 1, leng - 1));
}

