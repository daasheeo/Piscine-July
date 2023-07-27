#include <unistd.h>

void	escribe_matriz(char **m, int n)
{
	int i;
	int j;

	i = 1;
	while (i <= n)
	{
		j = 1;
		while (j <= n)
		{
			write(1, &m[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}