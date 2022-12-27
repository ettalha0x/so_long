/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:09:38 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/27 22:49:55 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_u(t_game *game)
{
	if (game->map[game->x_p][game->y_p] == 'E' && game->n_colect == 0)
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->x_p + 1][game->y_p] = '0';
		game->moves++;
		ft_printf("moves : %d\n", game->moves);
		game->endgame = 1;
		ft_build(game);
		ft_printf(">>>>>Congratulation you win<<<<<\n");
		exit(0);
	}
	else if (game->map[game->x_p][game->y_p] == '1')
		game->x_p += 1;
	else if (game->map[game->x_p][game->y_p] == 'E')
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->x_p + 1][game->y_p] = '0';
		ft_build(game);
		mlx_put_image_to_window
		(game->mlx, game->win, game->img.p, game->y_p * 100, game->x_p * 100);
		game->moves++;
		ft_printf("moves : %d\n", game->moves);
	}
	else
	{
		mlx_clear_window(game->mlx, game->win);
		if (game->map[game->x_p][game->y_p] == 'C')
			game->n_colect -= 1;
		game->map[game->x_p][game->y_p] = 'P';
		if (game->map[game->x_p + 1][game->y_p] == 'P')
			game->map[game->x_p + 1][game->y_p] = '0';
		else
			game->map[game->x_p + 1][game->y_p] = 'E';
		game->moves++;
		ft_printf("moves : %d\n", game->moves);
		ft_build(game);
	}
}

void	move_d(t_game *game)
{
	if (game->map[game->x_p][game->y_p] == 'E' && game->n_colect == 0)
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->x_p - 1][game->y_p] = '0';
		game->moves++;
		ft_printf("moves : %d\n", game->moves);
		game->endgame = 1;
		ft_build(game);
		ft_printf(">>>>>Congratulation you win<<<<<\n");
		exit(0);
	}
	else if (game->map[game->x_p][game->y_p] == '1')
		game->x_p -= 1;
	else if (game->map[game->x_p][game->y_p] == 'E')
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->x_p - 1][game->y_p] = '0';
		ft_build(game);
		mlx_put_image_to_window
		(game->mlx, game->win, game->img.p, game->y_p * 100, game->x_p * 100);
		game->moves++;
		ft_printf("moves : %d\n", game->moves);
	}
	else
	{
		mlx_clear_window(game->mlx, game->win);
		if (game->map[game->x_p][game->y_p] == 'C')
			game->n_colect -= 1;
		game->map[game->x_p][game->y_p] = 'P';
		if (game->map[game->x_p - 1][game->y_p] == 'P')
			game->map[game->x_p - 1][game->y_p] = '0';
		else
			game->map[game->x_p - 1][game->y_p] = 'E';
		game->moves++;
		ft_printf("moves : %d\n", game->moves);
		ft_build(game);
	}
}

void	move_r(t_game *game)
{
	if (game->map[game->x_p][game->y_p] == 'E' && game->n_colect == 0)
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->x_p][game->y_p - 1] = '0';
		game->moves++;
		ft_printf("moves : %d\n", game->moves);
		game->endgame = 1;
		ft_build(game);
		ft_printf(">>>>>Congratulation you win<<<<<\n");
		exit(0);
	}
	else if (game->map[game->x_p][game->y_p] == '1')
		game->y_p -= 1;
	else if (game->map[game->x_p][game->y_p] == 'E')
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->x_p][game->y_p - 1] = '0';
		ft_build(game);
		mlx_put_image_to_window
		(game->mlx, game->win, game->img.p, game->y_p * 100, game->x_p * 100);
		game->moves++;
		ft_printf("moves : %d\n", game->moves);
	}
	else
	{
		mlx_clear_window(game->mlx, game->win);
		if (game->map[game->x_p][game->y_p] == 'C')
			game->n_colect -= 1;
		game->map[game->x_p][game->y_p] = 'P';
		if (game->map[game->x_p][game->y_p - 1] == 'P')
			game->map[game->x_p][game->y_p - 1] = '0';
		else
			game->map[game->x_p][game->y_p - 1] = 'E';
		game->moves++;
		ft_printf("moves : %d\n", game->moves);
		ft_build(game);
	}
}

void	move_l(t_game *game)
{
	if (game->map[game->x_p][game->y_p] == 'E' && game->n_colect == 0)
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->x_p][game->y_p + 1] = '0';
		game->moves++;
		ft_printf("moves : %d\n", game->moves);
		game->endgame = 1;
		ft_build(game);
		ft_printf(">>>>>Congratulation you win<<<<<\n");
		exit(0);
	}
	else if (game->map[game->x_p][game->y_p] == '1')
		game->y_p += 1;
	else if (game->map[game->x_p][game->y_p] == 'E')
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->x_p][game->y_p + 1] = '0';
		ft_build(game);
		mlx_put_image_to_window
		(game->mlx, game->win, game->img.p, game->y_p * 100, game->x_p * 100);
		game->moves++;
		ft_printf("moves : %d\n", game->moves);
	}
	else
	{
		mlx_clear_window(game->mlx, game->win);
		if (game->map[game->x_p][game->y_p] == 'C')
			game->n_colect -= 1;
		game->map[game->x_p][game->y_p] = 'P';
		if (game->map[game->x_p][game->y_p + 1] == 'P')
			game->map[game->x_p][game->y_p + 1] = '0';
		else
			game->map[game->x_p][game->y_p + 1] = 'E';
		game->moves++;
		ft_printf("moves : %d\n", game->moves);
		ft_build(game);
	}
}

void	move_player(int keycode, t_game *game)
{
	if (keycode == KEY_W || keycode == KEY_UP)
	{
		game->x_p -= 1;
		move_u(game);
	}
	else if (keycode == KEY_S || keycode == KEY_DOWN)
	{
		game->x_p += 1;
		move_d(game);
	}
	else if (keycode == KEY_D || keycode == KEY_RIGHT)
	{
		game->y_p += 1;
		move_r(game);
	}
	else if (keycode == KEY_A || keycode == KEY_LEFT)
	{
		game->y_p -= 1;
		move_l(game);
	}
	else if (keycode == KEY_ESC)
		close_win();
}
