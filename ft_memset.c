#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t			index;
	unsigned char	*mem;

	mem = b;
	index = 0;
	while (index < n)
	{
		mem[index] = (unsigned char)c;
		index++;
	}
	return (b);
}
