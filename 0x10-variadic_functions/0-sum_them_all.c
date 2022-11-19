#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all the arguments passed to function
 * @n: is the number of arguments to be passed
 *
 * Return: sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_start(ap, n);
	int i = 0, int sum = 0;

	while (i < n)
	{
		sum = sum + va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
