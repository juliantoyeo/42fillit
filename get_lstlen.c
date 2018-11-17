/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lstlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 09:50:03 by lcavalle          #+#    #+#             */
/*   Updated: 2017/11/24 14:51:22 by lcavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	get_lstlen(t_tmino *list)
{
	int		len;
	t_tmino	*new;

	len = 0;
	new = list;
	while (new)
	{
		len++;
		new = new->next;
	}
	return (len);
}
