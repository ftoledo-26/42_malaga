#include "libft.h"
i
nt ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        return(c - 32);
    else
        return (c);
}