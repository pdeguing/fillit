/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:11:43 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/02 15:43:27 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*get_input(char *name)
{
	int		fd;
	int		ret;
	char	*buf;

	fd = open(name, O_RDONLY);
	if (fd == -1)
		return ("open() failed: fd == -1");
	buf = (char *)malloc(sizeof(char) * (BUF_SIZE + 1));
	if (!buf)
		return ("malloc() failed");
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	return (buf);
}
