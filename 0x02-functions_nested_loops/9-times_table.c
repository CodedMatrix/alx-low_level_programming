#include "main.h"

void times_table(void)
{
    int i, j, product;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            product = i * j;

            if (j == 0)
            {
                _putchar('0' + product);
            }
            else if (product < 10)
            {
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
                _putchar('0' + product);
            }
            else
            {
                _putchar(',');
                _putchar(' ');
                _putchar('0' + (product / 10));
                _putchar('0' + (product % 10));
            }
        }
        _putchar('\n');
    }
}
