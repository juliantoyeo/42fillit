/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 15:01:31 by lcavalle          #+#    #+#             */
/*   Updated: 2017/11/24 18:05:17 by lcavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	solver(t_tmino *tlist, char **map, t_pos pos)
{
	char id;

	pos.x = 0;
	pos.y = 0;
	if (!tlist)
		return (1);
	while (map[pos.x + tlist->height])
	{
		while (map[pos.x][pos.y + tlist->width])
		{
			if ((fill_tmino(pos.x, pos.y, map, tlist)))
			{
				id = tlist->id;
				if ((solver(tlist->next, map, pos)))
					return (1);
				remove_tmino(map, id);
			}
			pos.y++;
		}
		pos.y = 0;
		pos.x++;
	}
	pos.x = 0;
	return (0);
}

int	main(int ac, char **av)
{
	char	**map;
	int		map_size;
	t_tmino *list;
	t_pos	pos;

	pos.x = 0;
	pos.y = 0;
	if ((list = parse_tminos(ac, av)) == NULL)
		return (0);

	map_size = get_map_size(get_lstlen(list));
	if ((map = get_map(map_size)) == NULL)
	{
		ft_putstr("error\n");
		return (0);
	}
	while (!(solver(list, map, pos)))
	{
		delctab(map);
		map_size++;
		map = get_map(map_size);
	}
	deltminolst(&list);
	ft_putctab(map);
	return (0);
}
