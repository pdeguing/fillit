/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 11:33:18 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/08 11:17:38 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char	*buf;
	t_tetro	**array;

	if (argc != 2)
		return (usage_display());
	buf = get_input(argv[1]);
	if (verify_input(buf) == 0)
	{
		ft_putstr("error\n");
		return (-1);
	}
	array = tetro_array(buf);
	if ((solve(array) == -1))
		return (0);
}
