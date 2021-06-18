#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	i[] = "batata";

	printf("%d\n", ft_strlen(i));
	return (0);
}
