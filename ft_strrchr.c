#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		index;

	index = 0;
	while (s[index])
		index++;
	while (index > 0)
	{
		if (s[index] == (char)c)
			return ((char *)&s[index]);
		index--;
	}
	if (s[index] == (char)c)
		return ((char *)&s[index]);
	return (NULL);
}
