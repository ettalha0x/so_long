/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:24:37 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/27 21:11:00 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <fcntl.h>
# include "./gnl/get_next_line.h"
# include "./ft_printf/ft_printf.h"
# include <mlx.h>

# define KEY_W 13
# define KEY_A 0
# define KEY_S 1
# define KEY_D 2
# define KEY_ESC 53

# define KEY_UP 126
# define KEY_LEFT 123
# define KEY_DOWN 125
# define KEY_RIGHT 124

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
	int		map_w;
	int		map_h;
	t_img	img;
	int		n_colect;
	int		n_player;
	int		n_exit;
	int		x_p;
	int		y_p;
	int		moves;
	int		endgame;
}	t_game;

typedef struct s_vars
{
	int	i;
	int	j;
}t_var;

int		check_map(t_game *g);
int		check_path(t_game *g);
int		check_map_lr(t_game *g);
int		check_map_ud(t_game *g);
int		check_map_in(t_game *g);
int		check_ecp(t_game *g);
int		count_map_lines(char **map);
int		check_is_rectangle(t_game *g);
char	**fill_map_arr(char *file);
char	*ft_strnstr(char *str, char *to_find, int n);
void	img_draw(void *img, t_game *g, int i, int j);
void	game_init(t_game *game);
void	vars_init(t_game *game);
void	imgs_init(t_game *game);
void	ft_build(t_game *mlx);
void	move_player(int keycode, t_game *game);
int		key_hook(int keycode, t_game *game);
int		close_win(void);

#endif
