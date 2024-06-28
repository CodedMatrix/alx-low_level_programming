#include "main.h"

/**
 * print_diagonal - prints a diagonal line of backslashes followed by a newline
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
    int i, j;

    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < n; i++)
    {
    

