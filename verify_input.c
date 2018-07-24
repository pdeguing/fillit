/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:14:13 by pdeguing          #+#    #+#             */
/*   Updated: 2018/07/23 18:42:55 by pdeguing         ###   ########.fr       */
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
		ft_putstr(table[i]);
		ft_putchar('\n');
		i++;	
	}
	return (1);
}

int		verify_char(char *buf)
{
	int		i;

	i = 0;
	while (buf[i])
	{
		if (buf[i] != '#' && buf[i] != '.' && buf[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}

int		verify_nbrline(char *buf)
{
	int		i;
	int		line;

	i = 0;
	while (buf[i])
	{
		line = 0;
		while (line < 4)
		{
			if (buf[i] == '\n')
				line++;
			i++;
		}
		if (line == 4 && buf[i] != '\n' && buf[i] != '\0')
			return (0);
		i++;
	}
	return (1);
}

int		verify_nbrhash(char *buf)
{
	int		i;
	int		hash;
	int		count;

	i = 0;
	while (buf[i])
	{
		hash = 0;
		count = 0;
		while ((hash < 4 || count < 19) && buf[i])
		{
			if (buf[i] == '#')
				hash++;
			i++;
			count++;
		}
		if (count == 20 && hash != 4)
			return (0);
		if (hash == 4 && count != 20)
			return (0);
		// maybe try do it with the new array of string? every 4 if hash != 4 return (0)?
		i++;
	}
	return (1);
}

int		verify_input(char *buf)
{
	if (!verify_nbrhash(buf))
		return (0);
	return (1);
//	verify_tetro(char *buf);
}
