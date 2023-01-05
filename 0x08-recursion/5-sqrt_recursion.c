#include "main.h"
/**
 * _sqrt_recursion - returns the natural square of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqtr_recursion(n, 0));
}
