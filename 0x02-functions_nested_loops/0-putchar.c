#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *ch = "_putchar";

	while (*ch != '\0')
	{
		putchar(*ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
