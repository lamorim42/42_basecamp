#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	a;
	int	c;
	int	*b;

	a = 10;
	b = &a;
	printf("%d\n", a);
	ft_ft(b);
	printf("%d\n", a);
	c = 3;
	b = &c;
	printf("%d\n", c);
	printf("%d\n", a);
	ft_ft(b);
	printf("%d\n", c);
	printf("%d\n", *b);
}
