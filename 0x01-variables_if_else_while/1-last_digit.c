#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check the code
 *l_ch - last char in a string
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int l_ch;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_ch = n % 10;

	if (l_ch > 5)
	{
		printf("%s %d is %d and is greater than 5\n", str, n, l_ch);
	}
	else if (l_ch == 0)
	{
		printf("%s %d is %d and is 0\n", str, n, l_ch);
	}
	else if (l_ch < 6)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, l_ch);
	}

	return (0);
}
