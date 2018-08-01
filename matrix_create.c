/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:45:26 by pdeguing          #+#    #+#             */
/*   Updated: 2018/07/31 15:25:42 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**matrix_create(int size)
{
	char	**matrix;
	int		i;
	int		j;

	matrix = (char **)malloc(sizeof(char *) * (size + 1));
	if (!matrix)
		return (NULL);
	i = 0;
	while (i < size)
	{	
		matrix[i] = (char *)malloc(sizeof(char) * (size + 1));
		if (!matrix[i])
			return (NULL);
		j = 0;
		while (j < size)
		{
			matrix[i][j]= '.';
			j++;
		}
		matrix[i][j] = '\0';
		i++;
	}
	matrix[i] = NULL;
	return (matrix);
}
