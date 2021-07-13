void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap;

	if (*b == 0)
		return ;
	swap = *a;
	*a = *a / *b;
	*b = swap % *b;
}
