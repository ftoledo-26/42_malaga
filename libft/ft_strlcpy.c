#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  i;

	i = 0;
	while(src[i] != '\0')
		i++;
	if (dstsize > 0)
	{
		size_t  j;

		j = 0; 
		while (j < dstsize -1 && src[j] != '\0')
			{
				dst[j] = src[j];
				j++;
			}
			dst[j] ='\0';
		}
	return (i);
}