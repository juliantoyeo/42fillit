/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deltminolst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 17:06:56 by lcavalle          #+#    #+#             */
/*   Updated: 2017/11/24 18:05:14 by lcavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	deltminolst(t_tmino **list)
{
	t_tmino *aux;

	aux = *list;
	while ((*list))
	{
		delctab(aux->tab);
		aux = (*list)->next;
		free(*list);
		*list = aux;
	}
}
