/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:15:35 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/02 15:34:26 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		verify_char(char *buf)
{
	int		i;

	i = 0;
	if (ft_strlen(buf) < 20)
		return (0);
	while (buf[i])
	{
		if (buf[i] != '#' && buf[i] != '.' && buf[i] != '\n')
			return (0);
		i++;
	}
	if (buf[i] == '\0' && buf[i - 1] == '\n' && buf[i - 2] == '\n')
		return (0);
	return (1);
}
