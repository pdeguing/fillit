/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetro_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 15:44:27 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/02 15:44:37 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetro		*tetro_fill(int *coord)
{
	t_tetro	*tetro;
	int		min_x;
	int		min_y;

	min_x = get_min(coord[0], coord[2], coord[4], coord[6]);
	min_y = get_min(coord[1], coord[3], coord[5], coord[7]);
	tetro = tetro_new(point_new(coord[0] - min_x, coord[1] - min_y),
				point_new(coord[2] - min_x, coord[3] - min_y),
				point_new(coord[4] - min_x, coord[5] - min_y),
				point_new(coord[6] - min_x, coord[7] - min_y));
	if (!tetro)
		return (NULL);
	return (tetro);
}
