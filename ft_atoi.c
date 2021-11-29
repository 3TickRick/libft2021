int	ft_atoi(const char *str)
{
	int	value;
	int	neg;

	neg = 1;
	value = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v' || \
			*str == '\f' || *str == '\r' || *str == '\n')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		value *= 10;
		value += (*str - '0');
		str++;
	}
	return (value * neg);
}
