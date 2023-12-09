void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n)
	{
		if (*str == ch)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
