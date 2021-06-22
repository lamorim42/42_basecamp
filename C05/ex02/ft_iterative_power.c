int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0 || (nb == 0 && power == 0))
		return (1);
	if (power == 1)
		return (nb);
	result = nb;
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}
