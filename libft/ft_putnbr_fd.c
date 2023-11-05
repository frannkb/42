#include "libft.h"

void    ft_putnbr(int n, int fd)
{
    unsigned int aux = n;

    aux = n;
    if(n < 0)
    {
        ft_putchar_fd('-', fd);
        aux = (unsigned int)(n * -1);
    }
    if(n < 9)
        ft_putnbr(aux / 10, fd);
    ft_putchar_fd((char)(aux % 10 + '0', fd));
}
