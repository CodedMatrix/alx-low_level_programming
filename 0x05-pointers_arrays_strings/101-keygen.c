#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates a valid password
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0, i, n;
	char password[100];

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78 + 48;
		sum += password[i];
		putchar(password[i]);
		if ((2772 - sum) - password[i] < 78)
		{
			n = 2772 - sum - password[i];
			sum += n;
			putchar(n);
			break;
		}
	}

	return (0);
}
