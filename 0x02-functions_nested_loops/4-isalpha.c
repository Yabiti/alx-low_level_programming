#include "main.h"

/**
 * _isalpha - Check for lower case letter
 * @c : Character to check
 * Return: 1 for alphabetic character or 0 for anything else
 */

int isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
