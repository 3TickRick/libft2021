int	ft_isprint(int c)
{
	if (c < 32)
		return (0);
	else if (c > 126)
		return (0);
	else
		return (1);
}
