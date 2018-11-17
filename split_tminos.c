/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_tminos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 00:35:18 by jyeo              #+#    #+#             */
/*   Updated: 2017/11/24 15:39:51 by lcavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		get_len(const char *s, char c)
{
	int		i;
	int		len;
	int		count;

	i = 0;
	len = 0;
	count = 0;
	if (s[0] == c)
		return (0);
	while (s[i])
	{
		if (s[i + 1] == '\0' || ((s[i + 1] == c && s[i + 2] == c)))
		{
			len++;
			count = 0;
		}
		if (s[i] == c)
			count++;
		if (count > 5)
			return (0);
		i++;
	}
	return (len + 1);
}

static int		get_len2(const char *s, char c)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[i])
	{
		len++;
		if (s[i] == c && s[i + 1] == c)
			return (len);
		i++;
	}
	return (len);
}

static char		*fill_words(const char *s, int size)
{
	int		i;
	char	*new;

	i = 0;
	if ((new = ft_strnew(size)) == NULL)
		return (NULL);
	while (i < size)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char			**split_tminos(char const *s)
{
	int		i;
	int		size;
	int		size_2;
	char	**new;

	i = 0;
	if (!s)
		return (NULL);
	size = get_len(s, '\n');
	if ((new = (char **)malloc(sizeof(char *) * (size))) == NULL)
		return (NULL);
	while (*s)
	{
		while (*s == '\n')
			s++;
		if (*s || *s != '\n')
		{
			size_2 = get_len2(s, '\n');
			new[i] = fill_words(s, size_2);
			i++;
			s = s + size_2;
		}
	}
	new[i] = 0;
	return (new);
}
