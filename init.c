/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:26:33 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/27 20:55:23 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	game_init(t_game *game)
{
	int	i;

	i = 0;
	game->map_w = (ft_strlen(game->map[0]) - 1) * 100;
	game->map_h = count_map_lines(game->map) * 100;
	game->mlx = mlx_init();
	game->win = mlx_new_window(game->mlx, game->map_w, game->map_h, "So long");
	while (i < count_map_lines(game->map))
		free(game->map[i++]);
	free(game->map);
}

void	vars_init(t_game *game)
{
	game->n_colect = 0;
	game->n_exit = 0;
	game->n_player = 0;
	game->endgame = 0;
	game->moves = 0;
}

void	imgs_init(t_game *game)
{
	game->img.wa = mlx_xpm_file_to_image
		(game->mlx, "img/w.xpm", &game->img.w, &game->img.h);
	game->img.c = mlx_xpm_file_to_image
		(game->mlx, "img/c.xpm", &game->img.w, &game->img.h);
	game->img.p = mlx_xpm_file_to_image
		(game->mlx, "img/p.xpm", &game->img.w, &game->img.h);
	game->img.e = mlx_xpm_file_to_image
		(game->mlx, "img/e.xpm", &game->img.w, &game->img.h);
}
