#include "libft.h"

char    *ft_substr(char const *str, unsigned int star, size_t len)
{
    char    *sub;
    size_t  s_len;

    s_len = ft_strlen(Str);
    if (star >= s_len)
        return(ft_strdup(""))
    str += star
    s_len = ft_strlen(str);
    if (len > s_len)
        len = s_len;
    sub = ft_calloc(len + 1, sizeof(char));
    if (!sub)
        return ('\0');
    ft_strlcpy(sub, str, len + 1);
    return (sub)
}