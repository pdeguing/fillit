/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetro_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 16:40:53 by pdeguing          #+#    #+#             */
/*   Updated: 2018/07/25 16:44:02 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetro		*tetro_new(t_point *p0, t_point *p1, t_point *p2, t_point *p3)
{
	t_tetro		*tetro;

	tetro = (t_tetro *)malloc(sizeof(t_tetro));
	if (!tetro)
		return (NULL);
	tetro->p0 = p0;
	tetro->p1 = p1;
	tetro->p2 = p2;
	tetro->p3 = p3;
	return (tetro);
}
