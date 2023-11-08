#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		bound;
	int		i;
	int		*buffer;
	int		*d;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min;
	d = (buffer = malloc(bound * sizeof(int)));
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	i = 0;
	while (i < bound)
	{
		buffer[i] = min + i;
		i++;
	}
	return (bound);
}
