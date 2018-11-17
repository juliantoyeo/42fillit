/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 09:54:47 by lcavalle          #+#    #+#             */
/*   Updated: 2017/11/24 14:52:16 by lcavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**get_map(int size)
{
	int		i;
	char	**map;

	i = 0;
	if ((map = (char **)malloc(sizeof(char *) * (size + 1))) == NULL)
		return (NULL);
	while (i < size)
	{
		if ((map[i] = ft_strnew(size)) == NULL)
			return (NULL);
		ft_memset(map[i], '.', size);
		i++;
	}
	map[size] = 0;
	return (map);
}
