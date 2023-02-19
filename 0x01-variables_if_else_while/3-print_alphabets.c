#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - prints alphanin lower and upper case
 * Return: Always 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar (ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar (ch);

	putchar('\n');
	return (0);
}
