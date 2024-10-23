#include "libft.h"

void bzero(void *s, unsigned int n) 
{
    unsigned char *p;

    *p = (unsigned char *)s;
    while (n > 0) 
    {
        *p++ = 0;
        n--;
    }
}