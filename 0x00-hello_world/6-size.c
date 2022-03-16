#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * %lu - format specific for unsigned integer
 *
 */
int main(void)
{
	char char_type;
	int int_type;
	long int long_int;
	long long int ll;
	float float_type;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char_type));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int_type));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long_int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float_type));
	return (0);
}
