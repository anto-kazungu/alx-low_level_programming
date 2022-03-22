#include <stdio.h>

void _putchar(char *n)
{
	while (*n != '\0')
	{
		putchar(*n);
		n++;
	}
}
