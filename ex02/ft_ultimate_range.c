#include <stdlib.h>

int	*ft_range2(int min, int max)
{
	int *a;
	int i;

	if (min >= max)
		return (0);
	a = malloc(max - min);
	if (a == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		a[i++] = min;
		++min;
	}
	return (a);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range2(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
