#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	count;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc(sizeof(**range) * (max - min));
	if (*range == 0)
		return (-1);
	count = 0;
	while (count < max - min)
	{
		(*range)[count] = min + count;
		count++;
	}
	return (count);
}
