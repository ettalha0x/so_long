/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ecp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 18:18:47 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/29 19:55:27 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_ecp(t_game *g)
{
	int	i;
	int	j;

	i = 0;
	while (g->map[i])
	{
		j = 0;
		while (g->map[i][j])
		{
			if (g->map[i][j] == 'E')
				g->n_exit++;
			if (g->map[i][j] == 'C')
				g->n_colect++;
			if (g->map[i][j] == 'P')
				g->n_player++;
			j++;
		}
		i++;
	}
	if (g->n_exit != 1 || g->n_colect == 0 || g->n_player != 1)
	{
		ft_printf("ecp error !\n");
		return (0);
	}
	return (1);
}
