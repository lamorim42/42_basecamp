#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strdup(char *src)
{
	char	*new_str;
	int		len_str;

	len_str = 0;
	while (src[len_str] != '\0')
		len_str++;
	new_str = malloc(sizeof(*new_str) * len_str);
	ft_strcpy(new_str, src);
	return (new_str);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
