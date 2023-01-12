/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:16:55 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/31 16:35:30 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	img_draw(void *img, t_game *g, int i, int j)
{
	mlx_put_image_to_window
		(g->mlx, g->win, img, j * 100, i * 100);
}

void	img_draw1(void *img, t_game *g, int i, int j)
{
	mlx_put_image_to_window
		(g->mlx, g->win, img, j * 100 + 25, i * 100 + 25);
}

void	ft_build(t_game *g)
{
	int	i;
	int	j;

	i = 0;
	while (g->map[i])
	{
		j = 0;
		while (g->map[i][j])
		{
			if (g->map[i][j] == '1')
				img_draw(g->img.wa, g, i, j);
			if (g->map[i][j] == 'C')
				img_draw1(g->img.c, g, i, j);
			if (g->map[i][j] == 'P')
			{
				img_draw(g->img.p, g, i, j);
				g->x_p = i;
				g->y_p = j;
			}
			if (g->map[i][j] == 'E')
				img_draw(g->img.e, g, i, j);
			j++;
		}
		i++;
	}
}
