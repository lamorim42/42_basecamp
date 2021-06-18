int		ft_str_is_lowercase(char *str);
int		ft_str_is_alphanum(char *str);
char	*ft_strupcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (ft_str_is_lowercase(&str[c]) && !(ft_str_is_alphanum(&str[c - 1])))
		{
			str[c] = *ft_strupcase(&str[c]);
		}
		c++;
	}
	return (str);
}

int	ft_str_is_alphanum(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			if (str[i] < '0' || str[i] > '9')
				return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
			str[c] = str[c] - 32;
		c++;
	}
	return (str);
}

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
