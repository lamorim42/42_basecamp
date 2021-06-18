#include <unistd.h>

void	ft_print_full_number(char x, char y, char z);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '9')
	{
		b = '1';
		while (b <= '9')
		{
			c = '2';
			ft_print_full_number(a, b, c);
			b++;
		}
		a++;
	}
}

void	ft_print_full_number(char x, char y, char z)
{
	while (z <= '9')
	{
		if (y > x && z > y)
		{
			write(1, &x, 1);
			write(1, &y, 1);
			write(1, &z, 1);
			if (x != '7')
			{
				write(1, ", ", 2);
			}
		}
		z++;
	}
}
