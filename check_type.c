/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 02:09:19 by jyeo              #+#    #+#             */
/*   Updated: 2017/11/24 14:48:20 by lcavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	check_size(char *s)
{
	int		i;
	char	c;
	int		sum;

	i = 0;
	sum = 0;
	while (s[i])
	{
		c = s[i];
		if (s[i] == '.' || s[i] == '#' || (((i + 1) % 5) == 0 && s[i] == '\n'))
		{
			sum = sum + s[i];
		}
		i++;
	}
	if (sum != 732)
		return (0);
	return (sum);
}

int	check_type_1(char *s, int i)
{
	if (s[i + 15] == '#')
		return (1);
	else if (s[i + 6] == '#')
		return (4);
	else if (s[i + 4] == '#')
		return (2);
	else if (s[i + 11] == '#')
		return (1);
	else if (s[i + 9] == '#')
		return (1);
	else if (s[i + 1] == '#')
		return (3);
	else
		return (3);
	return (0);
}

int	check_type_2(char *s, int i)
{
	if (s[i + 3] == '#')
		return (2);
	else if (s[i + 6] == '#')
		return (1);
	else if (s[i + 5] == '#')
		return (2);
	else if (s[i + 7] == '#')
		return (4);
	else if (s[i + 9] == '#')
		return (1);
	return (0);
}

int	check_type_3(char *s, int i)
{
	if (s[i + 1] == '#' && s[i + 6] == '#')
		return (1);
	else if (s[i + 4] == '#' && s[i + 6] == '#')
		return (3);
	else if (s[i + 6] == '#' && s[i + 7] == '#')
		return (2);
	else if (s[i + 3] == '#' && s[i + 4] == '#')
		return (4);
	else if (s[i + 1] == '#' && s[i + 4] == '#')
		return (1);
	else if (s[i + 4] == '#' && s[i + 9] == '#')
		return (2);
	else if (s[i + 6] == '#' && s[i + 11] == '#')
		return (2);
	return (0);
}

int	check_type(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '#')
		{
			if (s[i + 5] == '#' && s[i + 10] == '#')
				return (check_type_1(s, i));
			else if (s[i + 1] == '#' && s[i + 2] == '#')
				return (check_type_2(s, i));
			else if (s[i + 5] == '#')
				return (check_type_3(s, i));
			else if (s[i + 1] == '#' && s[i + 6] == '#' && s[i + 7] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}
