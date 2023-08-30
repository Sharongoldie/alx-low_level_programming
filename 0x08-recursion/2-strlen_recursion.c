#include "main.h"
/**
 * int _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured
 *
 * Return: The length of a string
 */
int _strlen_recursion(char *s);
{
	int lonit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
