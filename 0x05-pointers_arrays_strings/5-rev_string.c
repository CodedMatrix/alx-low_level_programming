#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: void
 */
void rev_string(char *s)
{
	int counter = 0;
	int i;
	char rev;

	while (s[counter] != '\0')
		counter++;

	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
