/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:14:13 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/02 15:18:39 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		verify_input(char *buf)
{
	if (!verify_line(buf))
		return (0);
	if (!verify_char(buf))
		return (0);
	if (!verify_nbrline(buf))
		return (0);
	if (!verify_nbrhash(buf))
		return (0);
	if (!verify_tetro(buf))
		return (0);
	if (!verify_connections(buf))
		return (0);
	return (1);
}
