#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all the parametes.
 * a blank line
 * @n: the number of parameters
 * Description: this function sum all the parameters)?
 * section header: the header of this function is variadic_functions.h)*
 * Return: this return the sum of the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}
	va_end(num);
	return (sum);
}
