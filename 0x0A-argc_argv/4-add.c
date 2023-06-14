#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the sum of args positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: Always o
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];

			for (k = 0; k < strlen(e); k++)
			{
				if				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(e);
		e++;
	}

	printf("%d\n", sum);
}

	else
	{
	printf("0\n", sum);
	}

	return (0);
}

