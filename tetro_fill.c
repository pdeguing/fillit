#include "fillit.h"

t_tetro		*tetro_fill(int *coord)
{
	t_tetro		*tetro;

	tetro = tetro_new(point_new(coord[0], coord[1]),
				point_new(coord[2], coord[3]),
				point_new(coord[4], coord[5]),
				point_new(coord[6], coord[7]));
	if (!tetro)
		return (NULL);
	return (tetro);
}
