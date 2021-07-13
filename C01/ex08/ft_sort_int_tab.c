void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	while (i <= size - 1)
	{
		j = 1;
		while (i + j <= size - 1)
		{
			if (tab[i] > tab[i + j])
			{
				swap = tab[i];
				tab[i] = tab[i + j];
				tab[i + j] = swap;
			}
			j++;
		}
		i++;
	}
}
