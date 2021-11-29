#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	initDst;

	initDst = ft_strlen(dst);
	i = 0;
	if (dstsize <= initDst)
		return (ft_strlen((char *)src) + dstsize);
	while (initDst + i < dstsize - 1 && src[i])
	{
		dst[initDst + i] = src[i];
		i++;
	}
	dst[initDst + i] = '\0';
	return (ft_strlen((char *)src) + initDst);
}
