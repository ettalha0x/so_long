/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:16:55 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/21 19:35:32 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_build(t_game *g)
{
	var	v;

	v.i = 0;
	v.j = 0;

	g->img.wa = mlx_xpm_file_to_image(g->mlx, "img/w.xpm", &g->img.w, &g->img.h);
	g->img.c = mlx_xpm_file_to_image(g->mlx, "img/c.xpm", &g->img.w, &g->img.h);
	g->img.p = mlx_xpm_file_to_image(g->mlx, "img/p.xpm", &g->img.w, &g->img.h);
	g->img.e = mlx_xpm_file_to_image(g->mlx, "img/e.xpm", &g->img.w, &g->img.h);
	while (g->map[v.i])
	{
		v.j = 0;
		while (g->map[v.i][v.j])
		{
			if (g->map[v.i][v.j] == '1')
				mlx_put_image_to_window(g->mlx, g->win, g->img.wa, v.j * 50, v.i * 50);
			if (g->map[v.i][v.j] == 'C')
				mlx_put_image_to_window(g->mlx, g->win, g->img.c, v.j * 50, v.i * 50);
			if (g->map[v.i][v.j] == 'P')
			{
				mlx_put_image_to_window(g->mlx, g->win, g->img.p, v.j * 50, v.i * 50);
				g->x_player = v.i * 50;
				g->y_player = v.j * 50;
			}
			if (g->map[v.i][v.j] == 'E')
			{
				mlx_put_image_to_window(g->mlx, g->win, g->img.e, v.j * 50, v.i * 50);
			}
			v.j++;
		}
		v.i++;
	}
}
