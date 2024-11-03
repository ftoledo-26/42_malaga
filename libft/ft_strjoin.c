#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2){
    int	i;
	int len1;
	int len2;
	char *str;

	if (s1 != '\0' && s2 != '\0')
	{
		len1 = strlen(s1);
		len2 = strlen(s2);
		str = (char*)malloc(sizeof(char) * (len1 + len2 + 1));
		if (str == '\0')
			return ('\0');
		i = -1;
		while (s1[++i] != '\0')
			str[i] = s1[i];
		while (s2[++i] != '\0')
		{
			str[len1] = s2[i];
			len1++;
		}
		str[len1] = '\0';
		return (str);
	}
	return('\0')
}