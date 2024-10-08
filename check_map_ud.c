/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_ud.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:21:21 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/27 20:32:45 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_map_ud(t_game *g)
{
	int	j;
	int	len;

	j = 0;
	len = ft_strlen(g->map[0]) - 2;
	while (j <= len)
	{
		if (g->map[0][j++] != '1')
		{
			ft_printf("up error !\n");
			return (0);
		}
	}
	j = 0;
	len = ft_strlen(g->map[count_map_lines(g->map) - 1]) - 2;
	while (j <= len)
	{
		if (g->map[count_map_lines(g->map) - 1][j++] != '1')
		{
			ft_printf("bottom error !\n");
			return (0);
		}
	}
	return (1);
}
