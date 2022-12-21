/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_lr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:20:54 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/18 12:11:56 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_map_lr(char **map)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (map[i])
	{
		j = 0;
		len = ft_strlen(map[i]) - 2;
		while (map[i][j])
		{
			if (j == 0)
				if (map[i][j] != '1')
					return (0);
			if (j == len)
				if (map[i][j] != '1')
					return (0);
			j++;
		}
		i++;
	}
	return (1);
}
