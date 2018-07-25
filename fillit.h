/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 11:47:03 by pdeguing          #+#    #+#             */
/*   Updated: 2018/07/24 16:39:30 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUF_SIZE 545
# include "include/libft.h"
# include <fcntl.h>

char	*get_input(char *name);

int		verify_input(char *buf);
int		verify_line(char *buf);
int		verify_char(char *buf);
int		verify_nbrline(char *buf);
int		verify_nbrhash(char *buf);
int		verify_tetro(char *buf);

#endif
