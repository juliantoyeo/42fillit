/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tmino.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 15:07:43 by lcavalle          #+#    #+#             */
/*   Updated: 2017/11/24 17:08:39 by lcavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tmino	*get_tmino(const char *input, char id)
{
	t_tmino *newtmino;

	newtmino = (t_tmino *)malloc(sizeof(t_tmino));
	newtmino->id = id;
	newtmino->tab = get_table(input);
	newtmino->next = NULL;
	return (newtmino);
}
