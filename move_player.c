/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:09:38 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/30 19:44:51 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_u(t_game *game)
{
	help_clear(game, game->map[game->x_p][game->y_p]);
	if (game->map[game->x_p][game->y_p] == 'E' && game->n_colect == 0)
	{
		game->map[game->x_p + 1][game->y_p] = '0';
		help0(game);
	}
	else if (game->map[game->x_p][game->y_p] == '1')
		game->x_p += 1;
	else if (game->map[game->x_p][game->y_p] == 'E')
	{
		game->map[game->x_p + 1][game->y_p] = '0';
		help1(game);
	}
	else
	{
		if (game->map[game->x_p][game->y_p] == 'C')
			game->n_colect -= 1;
		game->map[game->x_p][game->y_p] = 'P';
		if (game->map[game->x_p + 1][game->y_p] == 'P')
			game->map[game->x_p + 1][game->y_p] = '0';
		else
			game->map[game->x_p + 1][game->y_p] = 'E';
		help2(game);
	}
}

void	move_d(t_game *game)
{
	help_clear(game, game->map[game->x_p][game->y_p]);
	if (game->map[game->x_p][game->y_p] == 'E' && game->n_colect == 0)
	{
		game->map[game->x_p - 1][game->y_p] = '0';
		help0(game);
	}
	else if (game->map[game->x_p][game->y_p] == '1')
		game->x_p -= 1;
	else if (game->map[game->x_p][game->y_p] == 'E')
	{
		game->map[game->x_p - 1][game->y_p] = '0';
		help1(game);
	}
	else
	{
		if (game->map[game->x_p][game->y_p] == 'C')
			game->n_colect -= 1;
		game->map[game->x_p][game->y_p] = 'P';
		if (game->map[game->x_p - 1][game->y_p] == 'P')
			game->map[game->x_p - 1][game->y_p] = '0';
		else
			game->map[game->x_p - 1][game->y_p] = 'E';
		help2(game);
	}
}

void	move_r(t_game *game)
{
	help_clear(game, game->map[game->x_p][game->y_p]);
	if (game->map[game->x_p][game->y_p] == 'E' && game->n_colect == 0)
	{
		game->map[game->x_p][game->y_p - 1] = '0';
		help0(game);
	}
	else if (game->map[game->x_p][game->y_p] == '1')
		game->y_p -= 1;
	else if (game->map[game->x_p][game->y_p] == 'E')
	{
		game->map[game->x_p][game->y_p - 1] = '0';
		help1(game);
	}
	else
	{
		if (game->map[game->x_p][game->y_p] == 'C')
			game->n_colect -= 1;
		game->map[game->x_p][game->y_p] = 'P';
		if (game->map[game->x_p][game->y_p - 1] == 'P')
			game->map[game->x_p][game->y_p - 1] = '0';
		else
			game->map[game->x_p][game->y_p - 1] = 'E';
		help2(game);
	}
}

void	move_l(t_game *game)
{
	help_clear(game, game->map[game->x_p][game->y_p]);
	if (game->map[game->x_p][game->y_p] == 'E' && game->n_colect == 0)
	{
		game->map[game->x_p][game->y_p + 1] = '0';
		help0(game);
	}
	else if (game->map[game->x_p][game->y_p] == '1')
		game->y_p += 1;
	else if (game->map[game->x_p][game->y_p] == 'E')
	{
		game->map[game->x_p][game->y_p + 1] = '0';
		help1(game);
	}
	else
	{
		if (game->map[game->x_p][game->y_p] == 'C')
			game->n_colect -= 1;
		game->map[game->x_p][game->y_p] = 'P';
		if (game->map[game->x_p][game->y_p + 1] == 'P')
			game->map[game->x_p][game->y_p + 1] = '0';
		else
			game->map[game->x_p][game->y_p + 1] = 'E';
		help2(game);
	}
}
