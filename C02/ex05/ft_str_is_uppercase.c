int	ft_str_is_uppercase(char *str)
{
	int	t;

	t = 0;
	while (str[t] != '\0')
	{
		if (str[t] < 'A' || str[t] > 'Z')
			return (0);
		t++;
	}
	return (1);
}
