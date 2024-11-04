#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t  len;
    char    *cpy;

    len = ft_strlen(s) + 1;
    cpy = ft_calloc(len, sizeof(char));
    if (!cpy)
        return ('\0')
    return(ft_memcpy(cpy, s, len));
}
aaaaaa