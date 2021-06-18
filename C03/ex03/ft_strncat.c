char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	dest_len;
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest_len = i;
	i = 0;
	while ((unsigned int)i < nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
