#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * sum_them_all - sum all the parametes.
(* a blank line
 *@n: the number of parameters
* Description: this function sum all the parameters)?
(* section header: the header of this function is variadic_functions.h)*
* Return: this return the sum of the parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int x;
	unsigned int i;

	x = 0;

	if (n == 0)
		return (0);

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		x = x + va_arg(num, int);
		i++;
	}
	va_end(num);
	return (x);
}
