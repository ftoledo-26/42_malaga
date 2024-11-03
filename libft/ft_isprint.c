#include "libft.h"

int isprint(char c)
{
    if (c >= 32)
        return 1;
    else
        return 0;
}