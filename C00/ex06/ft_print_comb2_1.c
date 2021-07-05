#include <unistd.h>

void	ft_print_full_number(char x, char y, char z, char w);

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '/';
	while (++a <= '9')
	{
		b = '/';
		while (++b <= '8')
		{
			c = '/';
			while (++c <= '9')
			{
				d = '0';
				while (++d <= '9')
				{
					ft_print_full_number(a, b, c, d);
//					if (a != '9' && b != '8' && c != '9' && d != '9')
					write(1, ", ", 2);
				}
			}
		}
	}
}

void	ft_print_full_number(char x, char y, char z, char w)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, " ", 1);
	write(1, &z, 1);
	write(1, &w, 1);
}
