#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	if(!(array = (char *)malloc(size * count)))
		return(0);
	return(ft_memset(array, 0, size * count));
}
