#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome checksif astring is palindrome
 * @s: string to reverse
 * Return: 1 if it's , 0 it's not
 */
int is_palindreome(char *s)
{
	if (* == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len -1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len -1));
}
