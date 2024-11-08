#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		num = (unsigned int)n * -1;
		ft_putchar_fd('-', fd);
	}
	else
		num = (unsigned int)n;
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putchar_fd(num % 10 + '0', fd);
    }
    else
		ft_putchar_fd(num + '0', fd);
}

