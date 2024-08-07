#include "main.h"

/**
 * _pow_recursion - computes the power of a number.
 * @x: base number.
 * @y: exponent.
 *
 * Return: power of x raised to y. Returns -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
