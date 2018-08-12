/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 15:42:46 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/02 15:42:49 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	get_min(int i, int j, int k, int l)
{
	int	min;

	min = i;
	if (j < min)
		min = j;
	if (k < min)
		min = k;
	if (l < min)
		min = l;
	return (min);
}
