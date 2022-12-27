/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:23:37 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/24 17:51:00 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	replace(int i, int p, int j, char **map)
{
	if (map[i][j + 1] == '0' || map[i][j + 1] == 'C' || map[i][j + 1] == 'E')
	{
		map[i][j + 1] = 'P';
		p = 1;
	}
	if (map[i][j - 1] == '0' || map[i][j - 1] == 'C' || map[i][j - 1] == 'E')
	{
		map[i][j - 1] = 'P';
		p = 1;
	}
	if (map[i + 1][j] == '0' || map[i + 1][j] == 'C' || map[i + 1][j] == 'E')
	{
		map[i + 1][j] = 'P';
		p = 1;
	}
	if (map[i - 1][j] == '0' || map[i - 1][j] == 'C' || map[i - 1][j] == 'E')
	{
		map[i - 1][j] = 'P';
		p = 1;
	}
	return (p);
}

void	path_checker(char **map)
{
	int	p;
	int	i;
	int	j;

	p = 1;
	i = 0;
	j = 0;
	while (p == 1)
	{
		p = 0;
		i = 0;
		while (map[i])
		{
			j = 0;
			while (map[i][j])
			{
				if (map[i][j] == 'P')
				{
					p = replace(i, p, j, map);
				}
				j++;
			}
			i++;
		}
	}
}

int	check_path(t_game *g)
{
	int	i;
	int	j;

	path_checker(g->map);
	i = 0;
	j = 0;
	while (g->map[i])
	{
		j = 0;
		while (g->map[i][j])
		{
			if (g->map[i][j] == 'C' || g->map[i][j] == 'E')
			{
				ft_printf("path error !");
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
