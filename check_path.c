/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:23:37 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/12 11:46:43 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**check_forward(char **map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P')
			{
				if (map[i][j + 1] != '1')
					map[i][j + 1] = 'P';
				if (map[i + 1][j] != '1')
					map[i + 1][j] = 'P';
			}
			j++;
		}
		i++;
	}
	return (map);
}

char	**check_backward(char **map)
{
	int	i;
	int	j;

	i = count_map_lines(map) - 1;
	j = ft_strlen(map[0]);
	while (i >= 0)
	{
		j = ft_strlen(map[0]) - 1;
		while (j >= 0)
		{
			if (map[i][j] == 'P')
			{
				if (map[i][j - 1] != '1')
					map[i][j - 1] = 'P';
				if (map[i - 1][j] != '1')
					map[i - 1][j] = 'P';
			}
			j--;
		}
		i--;
	}
	return (map);
}

int	check_path(char **map)
{
	int	i;
	int	j;

	map = check_forward(map);
	map = check_backward(map);
	map = check_forward(map);
	map = check_backward(map);
	i = 0;
	j = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'C' || map[i][j] == 'E')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
