/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 11:10:40 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/31 20:19:42 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	help0(t_game *game)
{
	game->moves++;
	ft_printf("moves : %d\n", game->moves);
	game->endgame = 1;
	ft_build(game);
	ft_printf(">>>>>Congratulation you win<<<<<\n");
	ft_exit(game);
}

void	help1(t_game *game)
{
	ft_build(game);
	mlx_put_image_to_window
	(game->mlx, game->win, game->img.p, game->y_p * 100, game->x_p * 100);
	game->moves++;
	ft_printf("moves : %d\n", game->moves);
}

void	help2(t_game *game)
{
	game->moves++;
	ft_printf("moves : %d\n", game->moves);
	ft_build(game);
}

void	help_clear(t_game *game, char c)
{
	if (c != '1')
		mlx_clear_window(game->mlx, game->win);
}

void	flip_img(t_game *game, char c)
{
	if (c == 'l')
	{
		game->img.p = mlx_xpm_file_to_image
			(game->mlx, "textures/pl.xpm", &game->img.w, &game->img.h);
	}
	else if (c == 'r')
		game->img.p = mlx_xpm_file_to_image
			(game->mlx, "textures/pr.xpm", &game->img.w, &game->img.h);
}
