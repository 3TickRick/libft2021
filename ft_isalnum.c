int	ft_isalnum(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else if (c > 90 && c < 97)
		return (0);
	else if (c < 65)
		return (0);
	else if (c > 122)
		return (0);
	else
		return (1);
}
