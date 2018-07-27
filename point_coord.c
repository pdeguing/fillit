#include "fillit.h"

int	*point_coord(char *buf, int i)
{
	int	x;
	int	y;
	int	line_count;
	int	*coord;
	int	j;

	line_count = 0;
	x = 0;
	y = 0;
	j = 0;
	if(!(coord = (int *)malloc(sizeof(int) * 8)))
		return (NULL);
	while (buf[i] && line_count < 4)
	{
		if (buf[i] == '\n')
		{
			line_count++;
			x = x - 5;
			y++;
		}
		if (buf[i] == '#')
		{
			coord[j] = x;
			j++;
			coord[j] = y;
			j++;
		}
		x++;
		i++;
		ft_putchar('=');
		ft_putnbr(line_count);
		ft_putchar('\n');
	}
	return (coord);
}
