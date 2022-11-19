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
	va_list ap;

	if (n == 0)
		return (0);

	int i;
	int sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
