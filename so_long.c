/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:23:58 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/21 20:19:04 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(void)
{
	t_game	mlx;
	int		i;

	mlx.n_colect = 1;
	mlx.map = fill_map_arr("map.ber");
	if (!check_map(mlx.map))
	{
		ft_printf("Error\nmap is wrong");
		exit(EXIT_FAILURE);
	}
	i = 0;
	mlx.map_w = (ft_strlen(mlx.map[0]) - 1) * 50;
	mlx.map_h = count_map_lines(mlx.map) * 50;
	mlx.mlx = mlx_init();
	mlx.win = mlx_new_window(mlx.mlx, mlx.map_w, mlx.map_h, "So long");
	while (i < count_map_lines(mlx.map))
		free(mlx.map[i++]);
	free(mlx.map);
	mlx.map = fill_map_arr("map.ber");
	ft_build(&mlx);
	mlx_key_hook(mlx.win, key_hook, &mlx);
	mlx_loop(mlx.mlx);
}
