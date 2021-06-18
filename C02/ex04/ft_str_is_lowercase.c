int	ft_str_is_lowercase(char *str)
{
	int	t;

	t = 0;
	while (str[t] != '\0')
	{
		if (str[t] < 'a' || str[t] > 'z')
			return (0);
		t++;
	}
	return (1);
}
