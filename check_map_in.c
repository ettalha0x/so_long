/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_in.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:22:19 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/24 15:45:48 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_map_in(t_game *g)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (g->map[i])
	{
		j = 0;
		while (g->map[i][j])
		{
			if (g->map[i][j] != '0' && g->map[i][j] != '1'
				&& g->map[i][j] != 'C' && g->map[i][j] != 'E'
				&& g->map[i][j] != 'P' && g->map[i][j] != '\n')
			{
				ft_printf("map_in error !");
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
