#include "main.h"

/**
 * print_sign - prints the sign of a number
 *@n: - input integer
 * Return: Always 1 if n is > 0 and prints (+).
 * Return: Always 0 if n is = 0 and prints 0.
 * Return: Always -1 if n is < 0 and prints (-).
 *
 *
 */
int print_sign(int n)
{
	char p = '+';
	char ng = '-';
	char z = '0';

	if (n > 0)
	{
		_putchar (p);
		return (1);
	}
	else if (n == 0)
	{
		 _putchar (z);
		return (0);
	}
	else
	{
		_putchar (ng);
		return (-1);
	{
}
