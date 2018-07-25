/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:10:36 by pdeguing          #+#    #+#             */
/*   Updated: 2018/07/24 16:45:59 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		verify_line(char *buf)
{
	char	**table;
	int		i;

	i = 0;
	table = ft_strsplit(buf, '\n');
	while (table[i])
	{
		if (ft_strlen(table[i]) != 4)
			return (0);
		i++;
	}
	return (1);
}
