/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_is_rectangle.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:22:45 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/27 19:28:33 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_is_rectangle(t_game *g)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(g->map[i]);
	if (len < count_map_lines(g->map))
	{
		ft_printf("rectangle error !");
		return (0);
	}
	while (g->map[i])
	{
		if (ft_strlen(g->map[i]) != len)
		{
			ft_printf("rectangle error !");
			return (0);
		}
		i++;
	}
	return (1);
}
