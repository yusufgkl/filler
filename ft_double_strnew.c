#include "libft/libft.h"

char	**ft_double_strnew(size_t x, size_t y)
{
	char	**tab;
	char	*tableau2;
	size_t	i;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * y);
	tableau2 = (char *)malloc(sizeof(char) * x * y);
	while (i < y)
	{
		tab[i] = &tableau2[i * x];
		i++;
	}
	return (tab);
}
