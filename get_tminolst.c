/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tminolst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:14:17 by lcavalle          #+#    #+#             */
/*   Updated: 2017/11/25 20:42:26 by lcavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

t_tmino	*get_tminolst(char *str)
{
	int		i;
	t_tmino	*list;
	char	**tab_tminos;

	i = 0;
	list = NULL;


	if ((tab_tminos = read_file(str)) == NULL)
		return (NULL);

	while (tab_tminos[i])
		i++;
	i--;

	while (i >= 0)
	{
		if (check_size(tab_tminos[i]) && check_type(tab_tminos[i]))
		{
			add_tmino(&list, get_tmino(tab_tminos[i], i + 'A'));
		}
		else
			return (NULL);
		i--;
	}
	return (list);
}
