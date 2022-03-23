#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets a-z 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char c;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

