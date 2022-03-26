#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0.
 * row = row, col = column, v = values of current result
 * Return: The multiplication table
 */
void times_table(void)
{
	int row, col, v;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col = 1; col <= 9; col++)
		{
			v = (row * col);
			if ((v / 10) > 0)
			{
				_putchar((v / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((v % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
