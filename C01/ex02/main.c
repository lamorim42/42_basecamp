#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	c;
	int	d;
	int	*x;
	int	*y;

	c = 42;
	d = 13;
	x = &c;
	y = &d;
	printf("%d\n", c);
	printf("%d\n", d);
	ft_swap(x, y);
	printf("%d\n", c);
	printf("%d\n", d);
}
