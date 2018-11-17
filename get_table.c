/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_table.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 16:10:26 by lcavalle          #+#    #+#             */
/*   Updated: 2017/11/21 14:21:02 by lcavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**get_table(const char *input)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = (char **)ft_memalloc(sizeof(char *) * 5);
	while (i < 4)
	{
		tab[i] = ft_strsub(input, i * 5, 5);
		tab[i][4] = '\0';
		i++;
	}
	tab[i] = 0;
	return (tab);
}
