#include<stdlib.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: print value of n satus; zero, positive or negative
 *
 *Return: Always 0 (Success)
 */
int main (void)
{
	int num;
	printf("input a number:");
	scanf("%d", &num);
	if (num >= 0)
	printf("%d is positive number\n", num);
	else
	printf("%d is negative number\n", num);
	return (0);
}
