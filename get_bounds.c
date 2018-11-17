/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bounds.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 11:07:51 by lcavalle          #+#    #+#             */
/*   Updated: 2017/11/21 17:20:07 by lcavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_bbsize	init_box(void)
{
	t_bbsize box;

	box.xmin = 3;
	box.ymin = 3;
	box.xmax = 0;
	box.ymax = 0;
	return (box);
}

t_bbsize		get_bounds(char **tab)
{
	t_bbsize	box;
	int			i;
	int			j;

	box = init_box();
	i = -1;
	j = -1;
	while (++i < 4)
	{
		while (++j < 4)
		{
			if (tab[i][j] != '.' && i < box.xmin)
				box.xmin = i;
			if (tab[i][j] != '.' && i > box.xmax)
				box.xmax = i;
			if (tab[i][j] != '.' && j < box.ymin)
				box.ymin = j;
			if (tab[i][j] != '.' && j > box.ymax)
				box.ymax = j;
		}
		j = -1;
	}
	return (box);
}
