void	ft_putchar(char c);
void	ft_putline(char out0, char out1, char out2, int w);

void	rush(int x, int y)
{
	int	j;

	if (x > 0 && y > 0)
	{
		ft_putline('A', 'B', 'A', x);
		j = 0;
		while (j < y - 2)
		{
			ft_putline('B', ' ', 'B', x);
			j++;
		}
		if (y > 1)
			ft_putline('C', 'B', 'C', x);
	}
}

void	ft_putline(char out0, char out1, char out2, int w)
{
	int	i;

	ft_putchar(out0);
	i = 0;
	while (i < w - 2)
	{
		ft_putchar(out1);
		i++;
	}
	if (w > 1)
	{
		ft_putchar(out2);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('\n');
	}
}
