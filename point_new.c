/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 15:52:50 by pdeguing          #+#    #+#             */
/*   Updated: 2018/07/25 16:01:02 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_point		*point_new(int x, int y)
{
	t_point		*point;

	point = (t_point *)malloc(sizeof(t_point));
	if (!point)
		return (NULL);
	point->x = x;
	point->y = y;
	return (point);
}
