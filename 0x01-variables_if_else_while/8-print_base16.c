#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char c;


	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	printf("\n");
	return (0);
}
