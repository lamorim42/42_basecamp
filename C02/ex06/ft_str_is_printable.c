int	ft_str_is_printable(char *str)
{
	int	t;

	t = 0;
	while (str[t] != '\0')
	{
		if ((str[t] >= 0 && str[t] <= 31) || str[t] == 127)
			return (0);
		t++;
	}
	return (1);
}
