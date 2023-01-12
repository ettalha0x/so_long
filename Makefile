# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 12:01:38 by nettalha          #+#    #+#              #
#    Updated: 2023/01/01 18:11:41 by nettalha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= so_long

SRCS	=	so_long.c\
			ft_exit.c\
			count_file_lines.c\
			check_map_name.c\
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
			helper.c\
			move_player.c\
			key_hook.c\

OBJS = ${SRCS:.c=.o}
PRINTF = ft_printf/libftprintf.a

CC		= gcc

FLAGS	= -Wall -Wextra -Werror

RM		= rm -f

%.o:%.c
	$(CC) $(FLAGS) -c $^ -o $@

$(NAME):	$(OBJS) $(PRINTF)
		$(CC) $(PRINTF) -lmlx -framework OpenGL -framework AppKit $^ -o $@

all:	${NAME}

$(PRINTF):
	make -C ft_printf

clean	:
			make -C ft_printf fclean
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		: fclean $(NAME)
