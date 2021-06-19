int	ft_iterative_factorial(int nb)
{
	int	fat;

	fat = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		fat *= nb;
		nb--;
	}
	return (fat);
}
