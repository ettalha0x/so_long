/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_ud.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:21:21 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/18 12:24:08 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_map_ud(char **map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j] != '\n')
		{
			if (i == 0)
				if (map[i][j] != '1')
					return (0);
			if (i == count_map_lines(map) - 1)
				if (map[i][j] != '1')
					return (0);
			j++;
		}
		i++;
	}
	return (1);
}
