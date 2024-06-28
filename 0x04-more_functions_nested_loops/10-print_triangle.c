#include "main.h"

/**
 * print_triangle - Prints a triangle using the character '#'
 * @size: Size of the triangle
 *
 * Description: Prints a right-aligned triangle using '#' characters.
 *              If size is 0 or less, prints only a newline.
 */
void print_triangle(int size)
{
    int i, j;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 1; i <= size; i++)
    {
        /* Print spaces to align triangle to the right */
        for (j = size - i; j > 0; j--)
        {
            _putchar(' ');
        }

        /* Print '#' characters for the triangle */
        for (j = 1; j <= i; j++)
        {
            _putchar('#');
        }

        _putchar('\n');
    }
}

