#include "libft.h"

int isalnum(char c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= 48 && c <= 57)
        return 1;
    else
        return 0;
}