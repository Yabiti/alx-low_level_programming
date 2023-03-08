#include<unistd.h>

char _putchar(char c)
{
    write(1,&c,1);
    return (0);
}
