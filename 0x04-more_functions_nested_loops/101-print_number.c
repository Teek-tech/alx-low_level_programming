#include "main.h"

/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */
void print_number(int n)
{
	if (n < 0)
	{
	_putchar('-');
	n *= -1;
	}
	if (n / 10 !=0)
	{
	print_number(n / 10);
	}
	_printchar('0' + (n % 10));
}
