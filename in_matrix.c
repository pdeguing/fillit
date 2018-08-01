/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_matrix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 17:53:19 by pdeguing          #+#    #+#             */
/*   Updated: 2018/07/31 17:58:07 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		in_matrix(int i, int j, t_tetro *tetro, int size)
{
	if (i + tetro->p0->y >= size)
		return (0);
	if (j + tetro->p0->x >= size)
		return (0);
	if (i + tetro->p1->y >= size)
		return (0);
	if (j + tetro->p1->x >= size)
		return (0);
	if (i + tetro->p2->y >= size)
		return (0);
	if (j + tetro->p2->x >= size)
		return (0);
	if (i + tetro->p3->y >= size)
		return (0);
	if (j + tetro->p3->x >= size)
		return (0);
	return (1);
}
