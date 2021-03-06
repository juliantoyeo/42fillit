/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 00:21:27 by lcavalle          #+#    #+#             */
/*   Updated: 2017/11/18 00:02:43 by lcavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		multiplier;
	long	result;
	long	int_max;

	int_max = MAX_INT;
	result = 0;
	multiplier = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		multiplier = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return ((int)(result * multiplier));
}
