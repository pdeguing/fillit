/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_tetro.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 16:22:37 by pdeguing          #+#    #+#             */
/*   Updated: 2018/07/31 18:04:39 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		place_tetro(char **matrix, t_tetro *tetro, int size, char letter)
{
	int		i;
	int		j;
	int		placed;

	i = 0;
	placed = 0;
	while (matrix[i] && placed == 0)
	{
		j = 0;
		while (matrix[i][j] && placed == 0)
		{
			if (matrix[i][j] == '.' && placed == 0)
			{
				if (in_matrix(i, j, tetro, size)
					&& matrix[i + tetro->p0->y][j + tetro->p0->x] == '.'
					&& matrix[i + tetro->p1->y][j + tetro->p1->x] == '.'
					&& matrix[i + tetro->p2->y][j + tetro->p2->x] == '.'
					&& matrix[i + tetro->p3->y][j + tetro->p3->x] == '.')
				{
					matrix[i + tetro->p0->y][j + tetro->p0->x] = letter;
					matrix[i + tetro->p1->y][j + tetro->p1->x] = letter;
					matrix[i + tetro->p2->y][j + tetro->p2->x] = letter;
					matrix[i + tetro->p3->y][j + tetro->p3->x] = letter;
					placed = 1;
				}
				else
					return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
