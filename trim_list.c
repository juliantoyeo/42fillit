/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:45:53 by lcavalle          #+#    #+#             */
/*   Updated: 2017/11/24 14:46:39 by lcavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	convert(char **tab, char id)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i] != 0)
	{
		while (tab[i][j])
		{
			if (tab[i][j] == '#')
			{
				tab[i][j] = id;
			}
			j++;
		}
		j = 0;
		i++;
	}
}

void	trim_list(t_tmino *list)
{
	char	**aux;
	char	**aux2;

	while (list)
	{
		aux = list->tab;
		aux2 = aux;
		list->tab = trim_tmino(list);
		convert(list->tab, list->id);
		while ((*aux) != 0)
		{
			free(*aux);
			*aux = NULL;
			aux++;
		}
		free(aux2);
		aux2 = NULL;
		list = list->next;
	}
}
