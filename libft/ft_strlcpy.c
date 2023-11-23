#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t  i;
	i = 0;
	while (*s++)
		i++;
	return(i);

}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	 int	lenght;

	if(!src)
		return (0);
	lenght = ft_strlen(src);
	if(!dstsize)
		return (lenght);
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lenght);
}

int main(void)
{
	char *name = "frank";
	char dst[5];


	int n = ft_strlcpy(dst, name, 6);
	printf("%d", n);
}
