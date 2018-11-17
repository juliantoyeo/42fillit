/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:49:06 by lcavalle          #+#    #+#             */
/*   Updated: 2017/11/25 20:42:50 by lcavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

char		**read_file(char *str)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];
	char	**table;

	
	if (!(fd = open(str, O_RDONLY)))
		return (NULL);
	ret = read(fd, buf, BUF_SIZE + 1);
	buf[ret] = '\0';
	if ((table = split_tminos(buf)) == NULL)
		return (NULL);
	if (close(fd) == -1)
		return (NULL);
	return (table);
}
