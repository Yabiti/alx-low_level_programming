#include "main.h"
#include <unisted.h>
/**
 * _putchar - writes the character to stdout
 * @c: The character to print
 * Return: On succeess 1/
 * On error: 1 is returned and error is set to appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
