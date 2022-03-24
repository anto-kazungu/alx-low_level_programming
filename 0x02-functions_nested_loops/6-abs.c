#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 *@n: - input integer
 * Return: An integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	else
	{
		n = n;
	}
	return (n);
}
