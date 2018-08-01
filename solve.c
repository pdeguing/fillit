/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:46:37 by pdeguing          #+#    #+#             */
/*   Updated: 2018/07/31 20:02:48 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		solve(t_tetro **array)
{
	int		size;
	char	**matrix;
	int		i;
	int		j;

	size = matrix_minsize(array);
	matrix = matrix_create(size);
	place_tetro(matrix, array[0], size, 'A');
	i = 0;
	while (matrix[i])
	{
		j = 0;
		while (matrix[i][j])
		{
			ft_putchar(matrix[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
