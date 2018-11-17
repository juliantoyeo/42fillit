/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:38:11 by lcavalle          #+#    #+#             */
/*   Updated: 2017/11/25 20:37:14 by lcavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft/libft.h"
# include <fcntl.h>
# define BUF_SIZE 4096

typedef struct		s_bbsize
{
	int				xmin;
	int				ymin;
	int				xmax;
	int				ymax;
}					t_bbsize;

typedef struct		s_pos
{
	int				x;
	int				y;
}					t_pos;

typedef	struct		s_tmino
{
	char			id;
	char			**tab;
	int				width;
	int				height;
	struct s_tmino	*next;
}					t_tmino;

t_tmino				*parse_tminos(int ac, char **av);
char				**split_tminos(const char *s);
t_bbsize			get_bounds(char **tab);
char				**get_table(const char *input);
t_tmino				*get_tmino(const char *input, char id);
char				**read_file(char *str);
char				**trim_tmino(t_tmino *t);
void				trim_list(t_tmino *list);
void				add_tmino(t_tmino **list, t_tmino *tmino);
int					fill_tmino(int x, int y, char **map, t_tmino *tmino);
int					check_possible(int x, int y, char **map, t_tmino *tmino);
void				remove_tmino(char **map, char id);
t_tmino				*get_tminolst(char *str);
int					get_lstlen(t_tmino *list);
int					get_map_size(int len);
char				**get_map(int size);
int					check_size(char *str);
int					check_type_1(char *s, int i);
int					check_type_2(char *s, int i);
int					check_type_3(char *s, int i);
int					check_type(char *s);
void				delctab(char **tab);
void				deltminolst(t_tmino **tmino);

#endif
