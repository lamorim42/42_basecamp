int	ft_iterative_power(int nb, int power)
{
	int	sign;

	sign = 1;
	if (power < 0)
		return (0);
	if (power == 0 || (nb == 0 && power == 0))
		return (1);
	if (nb < 0 && power % 2 != 0)
		sign = sign * -1;
	if (power == 1)
		return (nb);
	while (power > 1)
	{
		nb *= nb;
		power--;
	}
	return (nb * sign);
}
