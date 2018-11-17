/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_tminos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 15:04:55 by lcavalle          #+#    #+#             */
/*   Updated: 2017/11/25 20:45:45 by lcavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tmino	*parse_tminos(int ac, char **av)
{
	t_tmino *list;

	if (ac != 2)
	{
		ft_putstr("usage: ./fillit input_file\n");
		return (NULL);
	}

	if ((list = get_tminolst(av[1])) == NULL)
	{
		
		ft_putstr("error\n");
		return (NULL);
	}
	trim_list(list);
	return (list);
}
