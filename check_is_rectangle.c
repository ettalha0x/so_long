/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_is_rectangle.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:22:45 by nettalha          #+#    #+#             */
/*   Updated: 2023/01/04 18:52:35 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_is_rectangle(t_game *g)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(g->map[i]);
	if (count_map_lines(g->map) > 14)
	{
		ft_printf("Error! you exceed the map height max !\n");
		return (0);
	}
	while (g->map[i])
	{
		if (ft_strlen(g->map[i]) != len)
		{
			ft_printf("rectangle error !\n");
			return (0);
		}
		i++;
	}
	return (1);
}
