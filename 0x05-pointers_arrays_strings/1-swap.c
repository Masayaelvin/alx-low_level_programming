#include "main.h"

/**
 *swap_int - swaps values of two numbers
 *@a: is first interger
 *@b: is second  interger
 *Return: Always 0
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
