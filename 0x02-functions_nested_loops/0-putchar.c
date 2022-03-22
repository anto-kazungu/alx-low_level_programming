#include <main.h>
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
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
