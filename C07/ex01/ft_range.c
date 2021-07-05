#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*nbrs;
	int	count;

	if (min >= max)
		return (0);
	nbrs = malloc(sizeof(int) * (max - min));
	count = 0;
	while (count < max - min)
	{
		nbrs[count] = min + count;
		count++;
	}
	return (nbrs);
}
