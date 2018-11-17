/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tmino.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 11:03:59 by lcavalle          #+#    #+#             */
/*   Updated: 2017/11/24 14:53:55 by lcavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	fill_tmino(int x, int y, char **map, t_tmino *tmino)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!(check_possible(x, y, map, tmino)))
		return (0);
	while (tmino->tab[i])
	{
		while (tmino->tab[i][j])
		{
			if (tmino->tab[i][j] == tmino->id)
				map[x + i][y + j] = tmino->tab[i][j];
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}
