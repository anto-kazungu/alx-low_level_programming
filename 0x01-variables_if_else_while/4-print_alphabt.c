#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch, e, q;

	e = 'e';
	q = 'q';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == e || ch == q)
		{
			continue;
		}
		else
		{
			putchar(ch);
		}
	}
	printf("\n");
	return (0);
}
