#include "fillit.h"

int	get_min(int i, int j, int k, int l)
{
	int	min;

	min = i;
	if (j < min)
		min = j;
	if (k < min)
		min = k;
	if (l < min)
		min = l;
	return (min);
}
