/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_lr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:20:54 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/27 20:27:07 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_map_lr(t_game *g)
{
	int	i;
	int	len;

	i = 0;
	while (g->map[i])
	{
		len = ft_strlen(g->map[i]) - 2;
		if (g->map[i][0] != '1')
		{
			ft_printf("left error !\n");
			return (0);
		}
		if (g->map[i][len] != '1')
		{
			ft_printf("right error !\n");
			return (0);
		}
		i++;
	}
	return (1);
}
