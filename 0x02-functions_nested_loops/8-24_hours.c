#include "main.h"

/**
 * jack_bauer - prints every minute starting from 00:00 to 23:59.
 * Return: Time in 24hrs
 *_putchar((h / 10) + '0') - prints first integer in a number as we loop
 *_putchar((h % 10) + '0') - prints last integer in a number as we loop
 *
 *
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
