#include "libft.h"

void	ft_bzero(void *b, int n)
{
	int		index;
	char	*mem;

	mem = b;
	index = 0;
	while (index < n)
	{
		mem[index] = '\0';
		index++;
	}
}
