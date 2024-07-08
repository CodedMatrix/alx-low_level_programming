#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string to be searched
 * @needle: The substring to be located
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *I = haystack;
		char *P = needle;

		while (*I == *P && *P != '\0')
		{
			I++;
			P++;
		}
		if (*P == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
