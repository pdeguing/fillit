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

int		main(void)
{
	t_point		*p0;
	t_point		*p1;
	t_point		*p2;
	t_point		*p3;
	t_tetro		*tetro;

	p0 = point_new(0, 0);
	p1 = point_new(1, 1);
	p2 = point_new(2, 2);
	p3 = point_new(3, 3);
	tetro = tetro_new(p0, p1, p2, p3);
	ft_putnbr(p0->x);
	ft_putchar('/');
	ft_putnbr(p0->y);
	ft_putchar('\n');
	ft_putnbr(p1->x);
	ft_putchar('/');
	ft_putnbr(p1->y);
	ft_putchar('\n');
	ft_putnbr(p2->x);
	ft_putchar('/');
	ft_putnbr(p2->y);
	ft_putchar('\n');
	ft_putnbr(p3->x);
	ft_putchar('/');
	ft_putnbr(p3->y);
	ft_putchar('\n');
	return (0);
}
