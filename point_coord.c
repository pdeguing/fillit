/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point_coord.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 15:43:36 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/02 15:56:58 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	*point_coord(char *buf, int i)
{
	int	x;
	int	y;
	int	*coord;
	int	j;

	x = 0;
	y = 0;
	j = 0;
	if (!(coord = (int *)malloc(sizeof(int) * 8)))
		return (NULL);
	while (buf[++i] && y < 4)
	{
		if (buf[i] == '\n')
		{
			x = x - 5;
			y++;
		}
		if (buf[i] == '#')
		{
			coord[j++] = x;
			coord[j++] = y;
		}
		x++;
	}
	return (coord);
}
