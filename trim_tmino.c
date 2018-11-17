/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_tmino.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:45:24 by lcavalle          #+#    #+#             */
/*   Updated: 2017/11/24 14:45:27 by lcavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char			**trim_tmino(t_tmino *tmino)
{
	char		**trimtab;
	t_bbsize	box;
	int			i;
	int			j;

	i = 0;
	j = 0;
	box = get_bounds(tmino->tab);
	trimtab = (char **)malloc(sizeof(char *) * (box.xmax - box.xmin + 2));
	trimtab[box.xmax - box.xmin + 1] = NULL;
	while (box.xmin + i <= box.xmax)
	{
		if ((trimtab[i] = ft_strnew(box.ymax - box.ymin + 1)) == NULL)
			return (NULL);
		while (box.ymin + j <= box.ymax)
		{
			trimtab[i][j] = tmino->tab[box.xmin + i][box.ymin + j];
			j++;
		}
		j = 0;
		i++;
	}
	tmino->height = box.xmax - box.xmin;
	tmino->width = box.ymax - box.ymin;
	return (trimtab);
}
