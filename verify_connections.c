/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_connections.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 08:53:18 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/02 16:14:08 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		nbr_connections(char *buf, int i)
{
	int		connect;

	connect = 0;
	if (buf[i + 1] == '#')
		connect++;
	if (buf[i - 1] == '#')
		connect++;
	if (buf[i + 5] == '#')
		connect++;
	if (buf[i - 5] == '#')
		connect++;
	return (connect);
}

int		verify_connections(char *buf)
{
	int		i;
	int		connect;
	int		hash;

	i = -1;
	while (buf[++i])
	{
		connect = 0;
		hash = 0;
		while (hash < 4 && buf[i])
		{
			if (buf[i] == '#')
			{
				connect = connect + nbr_connections(buf, i);
				hash++;
			}
			i++;
		}
		if (hash == 4 && connect < 6)
			return (0);
	}
	return (1);
}
