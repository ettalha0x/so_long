/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:40:20 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/31 20:21:07 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
		flip_img(game, 'r');
		game->y_p += 1;
		move_r(game);
	}
	else if (keycode == KEY_A || keycode == KEY_LEFT)
	{
		flip_img(game, 'l');
		game->y_p -= 1;
		move_l(game);
	}
	else if (keycode == KEY_ESC)
		close_win(game);
}

int	key_hook(int keycode, t_game *game)
{
	if (game->endgame == 0)
		move_player(keycode, game);
	return (0);
}

int	close_win(t_game *game)
{
	ft_printf("you quite the game\n");
	ft_exit(game);
	return (0);
}
