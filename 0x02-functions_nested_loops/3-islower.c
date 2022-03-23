#include "main.h"

/**
 * _islower - returns one if a character is an alphabet between a-z
 *@c: - the input character
 * Return: Always 1 if is an alphabet.
 * Return: Always 0 if not an alphabet.
 */
int _islower(int c)
{
	int n

	if (c >= 'a' && c <= 'z')
	{
		n = 1;
	}
	else
	{
		n = 0;
	}
	return (n);
}

