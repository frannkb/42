void	ft_putnbr_fd(int n, int fd)
{
	unsigned int aux;

	aux = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		aux = (unsigned int)(n * -1);
	}
	if (aux > 9)
		ft_putnbr_fd(aux / 10, fd);
	ft_putchar_fd((char)(aux % 10 + '0'), fd);
}
