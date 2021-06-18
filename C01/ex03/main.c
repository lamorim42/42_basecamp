#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	div;
	int	mod;

	ft_div_mod(10, 5, &div, &mod);
	printf("div = %d\n", div);
	printf("mod = %d\n", mod);
}
