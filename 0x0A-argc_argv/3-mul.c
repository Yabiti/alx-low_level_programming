#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two numbers
 * @argc: argument count
 * @argv: argiment vector
 * Return: 0 if true , 1 if false
 */
int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0;
	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
