#include "functoin_pointers.h"
#include <stdio.h>
/**
* print_name - print name usingpointer to function
*@name: string to add
*@fun: pointer to function
*Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}

