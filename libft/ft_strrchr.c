//"Corregido"
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		i++;
	}
	while (i >= 0)
	{
		if (str[i] == c)
			return (&str[i]);
		else
			i--;
	}
	return ('\0');
}