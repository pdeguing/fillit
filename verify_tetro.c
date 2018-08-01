/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_tetro.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:43:17 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/01 13:21:55 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		verify_tetro(char *buf)
{
	int		i;

	i = 0;
	while (buf[i])
	{
		if (buf[i] == '#'
				&& buf[i + 1] != '#'
				&& buf[i - 1] != '#'
				&& buf[i + 5] != '#'
				&& buf[i - 5] != '#')
			return (0);
		i++;
	}
// add a check if number of links between '#' is >= '6'
	return (1);
}
