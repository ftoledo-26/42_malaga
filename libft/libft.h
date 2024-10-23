#ifndef LIBFT_H
#define LIBFT_H
#include <aio.h>


int isalpha(char c);
int isdigit(char c);
void bzero(void *s, unsigned int n);
char	*ft_strchr(const char *str, int c);
int ft_tolower(int c);
int ft_toupper(int c);
int isalnum(char c);
int isprint(char c);
void	ft_memcpy(void *dst, const void *src, size_t n);
int strlen(char *str);
int isascii(char c);
void memset(void *ptr, int value, unsigned int num);
int	ft_atoi(char *str);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
char *ft_strrchr(const char *str, int c);
int	ft_strncmp(const char *str, const char *str2, size_t c);
int	ft_memcmp(const void *dst, const void *str, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);


#endif