/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_possible.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 10:16:13 by lcavalle          #+#    #+#             */
/*   Updated: 2017/11/24 14:56:01 by lcavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	check_possible(int x, int y, char **map, t_tmino *tmino)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tmino->tab[i])
	{
		while (tmino->tab[i][j])
		{
			if (tmino->tab[i][j] == tmino->id)
				if (!map[x + i] || !map[x + i][y + j] ||
					map[x + i][y + j] != '.')
					return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}
