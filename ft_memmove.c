void	*ft_memmove(void *dst, void *src, int n)
{
	int		index;
	char	*tmpdst;
	char	*tmpsrc;

	tmpdst = dst;
	tmpsrc = src;
	index = 0;
	if (src == 0 && dst == 0)
		return (0);
	if (src < dst)
	{
		while (n > 0)
		{
			n--;
			tmpdst[n] = tmpsrc[n];
		}
	}
	while (index < n)
	{
		tmpdst[index] = tmpsrc[index];
		index++;
	}
	return (dst);
}
