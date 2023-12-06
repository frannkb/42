void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*string;

	string = (unsigned char*)str;
	while (len-- > 0)
		*(string++) = (unsigned char)c;
	return (str);
}
