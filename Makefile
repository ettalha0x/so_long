# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 12:01:38 by nettalha          #+#    #+#              #
#    Updated: 2022/12/27 20:43:46 by nettalha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= so_long

SRCS	=	so_long.c\
			fill_map_arr.c\
			count_map_lines.c\
			check_map_lr.c\
			check_map_ud.c\
			check_is_rectangle.c\
			check_map_in.c\
			check_map.c\
			check_path.c\
			check_ecp.c\
			ft_strnstr.c\
			ft_build.c\
			gnl/get_next_line.c\
			gnl/get_next_line_utils.c\
			init.c\
			move_player.c\
			key_hook.c\

OBJS = ${SRCS:.c=.o}

CC		= gcc

FLAGS	= -Wall -Wextra -Werror

RM		= rm -f

%.o: %.c
	$(CC) $(FLAGS)  -c $^ -o $@

$(NAME):	$(OBJS)
		cd ft_printf/ && make && make clean
		$(CC) ft_printf/libftprintf.a -lmlx -framework OpenGL -framework AppKit $^ -o $@
all:	${NAME}

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

