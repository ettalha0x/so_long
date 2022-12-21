/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:40:20 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/21 20:21:42 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_u(t_game *game)
{
	// if (game->map[game->y_player][game->x_player] == 'E' && game->n_colect == 0)
	// {
	// 	mlx_clear_window(game->mlx, game->win);
	// 	game->map[game->y_player][game->x_player + 1] = '0';
	// 	game->moves++;
	// 	game->endgame = 1;
	// 	ft_build(game);
	// }
	// else if (game->map[game->y_player][game->x_player] == '1'
	// 		|| game->map[game->y_player][game->x_player] == 'E')
	// 	game->x_player += 1;
	// if (game->map[game->y_player][game->x_player] == '0')
	// {
	// 	mlx_clear_window(game->mlx, game->win);
	// 	// if (game->map[game->y_player][game->x_player] == 'C')
	// 	// 	game->n_colect -= 1;
	// 	game->map[game->y_player][game->x_player] = 'P';
	// 	game->map[game->y_player][game->x_player + 1] = '0';
	// 	game->moves++;
	// 	ft_build(game);
	// }
	if (game->map[game->y_player][game->x_player] == 'P')
	{
		if (game->map[game->x_player - 1][game->y_player] == '0')
		{
			game->map[game->x_player - 1][game->y_player] = 'P';
	 		game->map[game->x_player][game->y_player] = '0';
		}
		ft_build(game);
	}
}

void	move_d(t_game *game)
{
	// if (game->map[game->y_player][game->x_player] == 'E'
	// 		&& game->n_colect == 0)
	// {
	// 	mlx_clear_window(game->mlx, game->win);
	// 	game->map[game->y_player][game->x_player - 1] = '0';
	// 	game->moves++;
	// 	game->endgame = 1;
	// 	ft_build(game);
	// }
	// else if (game->map[game->y_player][game->x_player] == '1'
	// 		|| game->map[game->y_player][game->x_player] == 'E')
	// 	game->x_player -= 1;
	// else
	// {
	// 	mlx_clear_window(game->mlx, game->win);
	// 	if (game->map[game->y_player][game->x_player] == 'C')
	// 		game->n_colect -= 1;
	// 	game->map[game->y_player][game->x_player] = 'P';
	// 	game->map[game->y_player][game->x_player - 1] = '0';
	// 	game->moves++;
	// 	ft_build(game);
	// }
	if (game->map[game->y_player][game->x_player] == 'P')
	{
		if (game->map[game->x_player + 1][game->y_player + 1] == '0')
		{
			game->map[game->x_player + 1][game->y_player + 1] = 'P';
	 		game->map[game->y_player][game->x_player] = '0';
		}
		ft_build(game);
	}
}

void	move_r(t_game *game)
{
	// if (game->map[game->y_player][game->x_player] == 'E'
	// 		&& game->n_colect == 0)
	// {
	// 	mlx_clear_window(game->mlx, game->win);
	// 	game->map[game->y_player - 1][game->x_player] = '0';
	// 	game->moves++;
	// 	game->endgame = 1;
	// 	ft_build(game);
	// }
	// else if (game->map[game->y_player][game->x_player] == '1'
	// 		|| game->map[game->y_player][game->x_player] == 'E')
	// 	game->y_player -= 1;
	// else
	// {
	// 	mlx_clear_window(game->mlx, game->win);
	// 	if (game->map[game->y_player][game->x_player] == 'C')
	// 		game->n_colect -= 1;
	// 	game->map[game->y_player][game->x_player] = 'P';
	// 	game->map[game->y_player - 1][game->x_player] = '0';
	// 	game->moves++;
	// 	ft_build(game);
	// }
	if (game->map[game->y_player][game->x_player] == 'P')
	{
		if (game->map[game->x_player][game->y_player + 1] == '0')
		{
			game->map[game->x_player][game->y_player + 1] = 'P';
	 		game->map[game->y_player][game->x_player] = '0';
		}
		ft_build(game);
	}
}

void	move_l(t_game *game)
{
	// if (game->map[game->y_player][game->x_player] == 'E'
	// 		&& game->n_colect == 0)
	// {
	// 	mlx_clear_window(game->mlx, game->win);
	// 	game->map[game->y_player + 1][game->x_player] = '0';
	// 	game->moves++;
	// 	game->endgame = 1;
	// 	ft_build(game);
	// }
	// else if (game->map[game->y_player][game->x_player] == '1'
	// 		|| game->map[game->y_player][game->x_player] == 'E')
	// 	game->y_player += 1;
	// else
	// {
	// 	mlx_clear_window(game->mlx, game->win);
	// 	if (game->map[game->y_player][game->x_player] == 'C')
	// 		game->n_colect -= 1;
	// 	game->map[game->y_player][game->x_player] = 'P';
	// 	game->map[game->y_player + 1][game->x_player] = '0';
	// 	game->moves++;
	// 	ft_build(game);
	// }
	if (game->map[game->y_player][game->x_player] == 'P')
	{
		if (game->map[game->x_player][game->y_player - 1] == '0')
		{
			game->map[game->x_player][game->y_player - 1] = 'P';
	 		game->map[game->y_player][game->x_player] = '0';
		}
		ft_build(game);
	}
}
int	key_hook(int keycode, t_game *game)
{
	mlx_clear_window(game->mlx, game->win);
	if (keycode == KEY_W)
	{
		//game->x_player -= 1;
		move_u(game);
	}
	else if (keycode == KEY_S)
	{
		//game->x_player += 1;
		move_d(game);
	}
	else if (keycode == KEY_D)
	{
		//game->y_player += 1;
		move_r(game);
	}
	else if (keycode == KEY_A)
	{
		//game->y_player -= 1;
		move_l(game);
	}
	return(0);
}

