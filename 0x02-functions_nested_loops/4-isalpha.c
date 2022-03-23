#include "main.h"

/**
 * _isalpha - returns 1 if a character is an alphabetical letter
 *@c: - the input character
 * Return: Always 1 if is an alphabet.
 * Return: Always 0 if not an alphabet.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
