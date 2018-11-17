/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_tmino.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:57:27 by lcavalle          #+#    #+#             */
/*   Updated: 2017/11/24 17:08:29 by lcavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	add_tmino(t_tmino **list, t_tmino *tmino)
{
	if (*list != NULL)
	{
		tmino->next = *list;
		(*list) = tmino;
	}
	*list = tmino;
}
