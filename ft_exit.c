/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 20:15:34 by nettalha          #+#    #+#             */
/*   Updated: 2023/01/01 18:20:46 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_exit(t_game *game)
{
	int	i;

	i = 0;
	while (i < count_map_lines(game->map))
		free(game->map[i++]);
	free(game->map);
	mlx_destroy_window(game->mlx, game->win);
	exit(0);
}

void	ft_exit0(t_game *game)
{
	int	i;

	i = 0;
	while (i < count_map_lines(game->map))
		free(game->map[i++]);
	free(game->map);
	exit(0);
}
