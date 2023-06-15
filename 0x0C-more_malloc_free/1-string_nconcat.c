#include <stdlib.h>
#include "main.h"

/**
*string_nonconcat number of bytes to concatenate.
*@s1: string to append
*@s2: string to concatenate
*@n1: number of bytes to concatenate s2 to s1.
*Return: pointer to allocate a newly space in memory.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsignedint i = 0; j = 0; n1 = 0; n2 = 0;
while (s1 && s1[n1])
len1++;
while (s2 && s2[n2])
n2++;
if (n < 2)
s = malloc(sizeof(char) * (n1 + n + 1));
else
s = malloc(sizeof(char) * (n2 + n + 1));
if (!s)
return (NULL);
while (i < n1)
{
s[i] = s1[i];
i++;
}
while (n < 2 && i < (n1 + n2))
s[i++] = s2[j++];
s[i] = '\0';
return (s);
}
