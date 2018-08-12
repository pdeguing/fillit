/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usage_display.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 15:45:02 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/02 19:24:58 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	usage_display(void)
{
	ft_putstr_fd("\nusage: ./fillit [input_file]\n\n", 2);
	ft_putstr_fd("Only '.' or '#' or '\\n' in [input_file].\n\n", 2);
	ft_putstr_fd("It should contain at most 26 tetrominos", 2);
	ft_putstr_fd(" and only tetrominos.\n\n", 2);
	ft_putstr_fd("A tetromino is a string of 21 characters, ", 2);
	ft_putstr_fd("4 lines of 4 characters.\n", 2);
	ft_putstr_fd("It is terminated by a final '\\n' ", 2);
	ft_putstr_fd("if followed by another tetromino.\n\n", 2);
	ft_putstr_fd("Each tetromino contains at most 4 '#', ", 2);
	ft_putstr_fd("the rest of the grid being '.',\n", 2);
	ft_putstr_fd("every '#' must be connected ", 2);
	ft_putstr_fd("to another one by his sides.\n\n", 2);
	return (0);
}
