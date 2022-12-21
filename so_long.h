/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:24:37 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/21 19:35:28 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H
# include <stdio.h>
# include <fcntl.h>
#include "./gnl/get_next_line.h"
#include "./ft_printf/ft_printf.h"
#include "mlx.h"

// # define KEY_ESC 65307
// # define KEY_Q 113

# define KEY_W 13
# define KEY_A 0
# define KEY_S 1
# define KEY_D 2

// # define KEY_UP 65362
// # define KEY_LEFT 65361
// # define KEY_DOWN 65364
// # define KEY_RIGHT 65363

typedef struct s_img
{
	int		w;
	int		h;
	void	*wa;
	void	*p;
	void	*c;
	void	*e;
}	t_img;

typedef struct s_game
{
	void	*mlx;
	void	*win;
	char	**map;
	//void	*img_backg;
	int		map_w;
	int		map_h;
	t_img	img;
	int		n_colect;
	// int		n_player;
	// int		n_exit;
	int		x_player;
	int		y_player;
	int		moves;
	int		endgame;
}	t_game;

typedef struct vars
{
	int	i;
	int	j;
}var;

int		check_map(char **map);
int		check_path(char **map);
int		check_map_lr(char **map);
int		check_map_ud(char **map);
int		check_map_in(char **map);
int		count_map_lines(char **map);
int		check_is_rectangle(char **map);
char	**fill_map_arr(char *file);
char	*ft_strnstr(char *str, char *to_find, int n);
void	ft_build(t_game *mlx);
int		key_hook(int keycode, t_game *game);


#endif
