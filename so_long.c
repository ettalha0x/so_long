/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:23:58 by nettalha          #+#    #+#             */
/*   Updated: 2023/01/01 15:43:42 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_game	mlx;

	vars_init(&mlx);
	if (argc == 2)
	{
		mlx.map = fill_map_arr(&mlx, argv[1]);
		if (!check_map(&mlx))
		{
			ft_printf("Error! map is wrong\n");
			ft_exit0(&mlx);
		}
		game_init(&mlx);
		imgs_init(&mlx);
		mlx.map = fill_map_arr(&mlx, argv[1]);
		ft_printf("moves : %d\n", mlx.moves);
		ft_build(&mlx);
		mlx_hook(mlx.win, 2, 0, key_hook, &mlx);
		mlx_hook(mlx.win, 17, 0, close_win, &mlx);
		mlx_loop(mlx.mlx);
	}
	else
	{
		ft_printf("Error : invalid syntax\n");
		ft_exit(&mlx);
	}
}
