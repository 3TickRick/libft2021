#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t n)
{
	size_t		i;

	i = 0;
	if (ft_strlen(hay) < 0 || ft_strlen(needle) == 0)
		return ((char *)hay);
	if (ft_strlen(needle) > n)
		return (0);
	while (i < n && hay[i])
	{
		if (ft_strncmp(&hay[i], needle, ft_strlen(needle)) == 0)
		{
			if (i + ft_strlen(needle) > n)
				return (0);
			return ((char *)&hay[i]);
		}
		i++;
	}
	return (0);
}
