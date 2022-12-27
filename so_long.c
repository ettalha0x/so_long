/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:23:58 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/27 20:58:46 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_game	mlx;

	vars_init(&mlx);
	ft_printf("moves : %d\n", mlx.moves);
	if (argc == 2)
	{
		mlx.map = fill_map_arr(argv[1]);
		if (!check_map(&mlx))
		{
			ft_printf("Error\nmap is wrong");
			exit(EXIT_FAILURE);
		}
		game_init(&mlx);
		imgs_init(&mlx);
		mlx.map = fill_map_arr(argv[1]);
		ft_build(&mlx);
		mlx_hook(mlx.win, 2, 0, key_hook, &mlx);
		mlx_hook(mlx.win, 17, 0, close_win, &mlx);
		mlx_loop(mlx.mlx);
	}
	else
	{
		ft_printf("Error : invalid syntax");
		exit(0);
	}
}
