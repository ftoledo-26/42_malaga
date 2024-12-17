#include "get_next_line.h"

size_t ft_strlen(char *s)
{
    size_t  i;

    i = 0;
    if (!s)
    {
        return (0);
    }
    while (str[i] != '\0')
    {
        i++;
    }
    return(i);
}

char	*ft_strchr(const char *str, int c)
{
	int i;
	int temp;

	temp = 0;
	i = 0;
	while ((char*)str[i] != '\0' && temp == 0)
	{
		if ((char*)str[i] == c)
		{
			return ((char*)&str[i]);
			temp = 1;
		}
		i++;
	}
	if (c == '\0')
		return ((char*)&str[i]);
	return (NULL);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
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
	return(NULL)
}

char *ft_get_line(char lonlen)
{
	char	*str;
	int i;

	i = 0;
	if (lonlen[i] == '\0')
		return ('\0');
	str = (char*)malloc(sizeof(char)) * (i + 2);
	if (!str)
		return (NULL);
	i = 0;
	while (lonlen[i] != '\0' && lonlen[i] != '\n')
	{
		str[i] = lonlen[i];
		i++;
	}
	if (lonlen[i] == '\n')
	{
		str[i] = lonlen[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		res = malloc(sizeof(char) * (1));
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (start < ft_strlen(s) && i < len && s[start])
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}
/*int	ft_izq_line(char izq_line)
{
	int	i;
	int j;
	char	*str;
	
	i = 0;
	if (!izq_line[i])
	{
			free(izq_line);
			return (str);
	}
	while (izq_line != '\0' && izq_line != '\n')
		i++;
	str = (char *) malloc(sizeof(char) * (strlen(izq_line) - i + 1));
	if (!str)
			return (NULL);
		i++;
		j = 0;
		while(izq_line[i] != '\0')
			str[j++] = izq_line[i++]; 
	free(izq_line);
	return (str);
}*/

