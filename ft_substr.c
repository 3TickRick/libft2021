#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	sLen;

	if (!s)
		return (NULL);
	sLen = ft_strlen((char *)s);
	i = 0;
	if (start > sLen)
		return (ft_strdup(""));
	if (sLen - start < len)
		len = sLen - start;
	str = malloc(len + 1);
	if (!str)
		return (0);
	while (i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
