#include "main.h"
/**
 * print_alphabet - utilizes on the _putchar function to the alphabet a - z
 * Return: Always 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
