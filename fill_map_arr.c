/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:26:31 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/21 10:43:46 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**fill_map_arr(char *file)
{
	char	**map;
	int		fd;
	int		i;

	i = 0;
	if (!(ft_strnstr(file, ".ber", ft_strlen(file))))
	{
		ft_printf("file name error");
		exit(EXIT_FAILURE);
	}
	fd = open(file, O_RDONLY);
	map = malloc(1000);
	if (!map)
		return (0);
	map[i] = get_next_line(fd);
	while (map[i])
	{
		i++;
		map[i] = get_next_line(fd);
	}
	return (map);
}
