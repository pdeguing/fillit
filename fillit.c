/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 11:33:18 by pdeguing          #+#    #+#             */
/*   Updated: 2018/07/27 10:08:36 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	t_tetro		**array;
	int		i;

	if (argc != 2 && !argv)
		return (0);
	array = tetro_array(get_input(argv[1]));
	if (!array)
		ft_putchar('N');
	i = 0;
	if (!array[i])
		ft_putstr("fsociety\n");
	while (array[i])
	{
		ft_putnbr(array[i]->p0->x);
		ft_putchar('/');
		ft_putnbr(array[i]->p0->y);
		ft_putchar(' ');
		ft_putnbr(array[i]->p1->x);
		ft_putchar('/');
		ft_putnbr(array[i]->p1->y);
		ft_putchar(' ');
		ft_putnbr(array[i]->p2->x);
		ft_putchar('/');
		ft_putnbr(array[i]->p2->y);
		ft_putchar(' ');
		ft_putnbr(array[i]->p3->x);
		ft_putchar('/');
		ft_putnbr(array[i]->p3->y);
		ft_putchar('\n');
		ft_putchar('\n');
		i++;
	}
	return (0);
}
