#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*str;

	if (!s || !f)
		return (NULL);
	index = 0;
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, ft_strlen(s) + 1);
	while (str[index])
	{
		str[index] = f(index, str[index]);
		index++;
	}
	return (str);
}
