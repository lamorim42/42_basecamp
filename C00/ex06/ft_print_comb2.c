#include <unistd.h>

void	ft_print_comb2(void)
{
	int		count0;
	int		count1;
	char	comb;

	write(1, "00 01", 5);
	count0 = 0;
	count1 = 2;
	while (count0 < 100 && count1 < 100)
	{
		write(1, ", ", 2);
		comb = count0 / 10 + '0';
		write(1, &comb, 1);
		comb =  count0 % 10 + '0';
		write(1, &comb, 1);
		write(1, " ", 1);
		comb = count1 / 10 + '0';
		write(1, &comb, 1);
		comb = count1 % 10 + '0';
		write(1, &comb, 1);
		++count1;
		if (count1 == 100)
			count1 = ++count0 + 1;
	}
}
