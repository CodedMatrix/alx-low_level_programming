#include "function_pointers.h"

/**
 * int_index - returns the index of the first element for which
 *             the cmp function does not return 0
 * @array: array of integers
 * @size: size of elements in array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which cmp does not return 0,
 *         or -1 if no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (array == NULL || size <= 0 || cmp == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]))
            return (i);
    }

    return (-1);
}

