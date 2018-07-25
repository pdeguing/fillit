/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_nbrhash.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:31:23 by pdeguing          #+#    #+#             */
/*   Updated: 2018/07/24 15:35:25 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		verify_nbrhash(char *buf)
{
	int		i;
	int		hash;
	int		count_line;

	i = 0;
	while (buf[i])
	{
		hash = 0;
		count_line = 0;
		while (count_line < 4 && buf[i])
		{
			if (buf[i] == '#')
				hash++;
			if (buf[i] == '\n')
				count_line++;
			i++;
		}
		if (hash != 4)
			return (0);
		i++;
	}
	return (1);
}
