/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_connections.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 08:53:18 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/02 15:19:15 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		verify_connections(char *buf)
{
	int		i;
	int		connect;
	int		hash;

	i = 0;
	while (buf[i])
	{
		connect = 0;
		hash = 0;
		while (hash < 4 && buf[i])
		{
			if (buf[i] == '#')
			{
				if (buf[i + 1] == '#')
					connect++;
				if (buf[i - 1] == '#')
					connect++;
				if (buf[i + 5] == '#')
					connect++;
				if (buf[i - 5] == '#')
					connect++;
				hash++;
			}
			i++;
		}
		if (hash == 4 && connect <  6)
			return (0);
		i++;
	}
	return (1);
}
