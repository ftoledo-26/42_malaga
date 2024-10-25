#ifndef get_next_line_h
# define get_nect_line_h

#include <stdlib.h>

#ifdef BEFFER_SIZE
# define BUFFER_SIZE 42
#endif

size_t strlen(char *s);
char	*ft_strchr(const char *str, int c);
char    *ft_strjoin(char const *s1, char const *s2);
char *ft_get_line(char lonlen);
int	*ft_izq_line(char izq_line);

#endif