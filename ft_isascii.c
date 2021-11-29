int	ft_isascii(int c)
{
	if (c < 0)
		return (0);
	else if (c > 127)
		return (0);
	else
		return (1);
}
