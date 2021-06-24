int	ft_is_sqrt_nb_int(int nb, int p);

int	ft_sqrt(int nb)
{
	int	p;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (nb);
	else
		p = ft_is_sqrt_nb_int(nb, 2);
	return (p);
}

int	ft_is_sqrt_nb_int(int nb, int p)
{
	if ((unsigned)nb < (unsigned)(p * p))
		return (0);
	if (nb == p * p)
		return (p);
	else
		return (ft_is_sqrt_nb_int(nb, p + 1));
}
