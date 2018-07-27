/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 11:33:18 by pdeguing          #+#    #+#             */
/*   Updated: 2018/07/25 16:50:34 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int	*coord;
	char	*buf;

	if (argc != 2 && !argv)
		return (0);
	buf = get_input(argv[2]);
	ft_putstr(buf);
	coord = point_coord(buf, 0);
	ft_putnbr(coord[0]);
	ft_putchar('\n');
	ft_putnbr(coord[1]);
	ft_putchar('\n');
	ft_putnbr(coord[2]);
	ft_putchar('\n');
	ft_putnbr(coord[3]);
	ft_putchar('\n');
	ft_putnbr(coord[4]);
	ft_putchar('\n');
	ft_putnbr(coord[5]);
	ft_putchar('\n');
	ft_putnbr(coord[6]);
	ft_putchar('\n');
	ft_putnbr(coord[7]);
	ft_putchar('\n');
	return (0);
}
