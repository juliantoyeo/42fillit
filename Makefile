# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jyeo <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/11 14:15:58 by jyeo              #+#    #+#              #
#    Updated: 2017/11/25 20:36:59 by lcavalle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
FLAGS = -Wall -Wextra -Werror

SOURCES = 	add_tmino.c \
			get_bounds.c \
			parse_tminos.c \
			get_lstlen.c \
			read_file.c \
			check_possible.c \
			get_map.c \
			remove_tmino.c \
			check_type.c \
			get_map_size.c \
			split_tminos.c \
			fill_tmino.c \
			get_table.c \
			get_tmino.c \
			trim_list.c \
			fillit.c \
		   	get_tminolst.c \
		   	trim_tmino.c \
			delctab.c \
			deltminolst.c
OBJ = $(SOURCES:.c=.o)
INCLUDES = -I libft -I includes
LIBS = -L libft/ -lft

all: $(NAME)

$(NAME): lib $(OBJ)
	@gcc -o $(NAME) $(OBJ) $(LIBS)

lib: 
	@echo "compiling libft"
	@make -C libft/
	@echo "libft compiled"

$(OBJ): %.o: %.c
	gcc $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
	@echo "removing $(NAME) objectct files"
	@rm -f $(OBJ)
	@echo "$(NAME) object files removed"
	@make -C libft/ clean

fclean:	clean
	@echo "cleaning $(NAME)"
	@rm -f $(NAME)
	@make -C libft/ fclean

re:	fclean all
