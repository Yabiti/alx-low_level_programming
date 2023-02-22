#include "main.h"

/**
 * main -  Entry
 * description: prints _putchar using prototype
 * Return: Always 0
 */
int main(void)
{
	char *str = "_putchar;

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

	return (0);
}
