/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:26:31 by nettalha          #+#    #+#             */
/*   Updated: 2023/01/01 15:55:23 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**fill_map_arr(t_game	*game, char *file)
{
	int		len;
	int		fd;
	int		i;

	i = 0;
	if (!check_map_name(file))
	{
		ft_printf("file name error");
		exit(0);
	}
	len = count_file_lines(file);
	game->map = malloc(sizeof(char *) * (len + 1));
	game->map[len] = NULL;
	if (!game->map)
		return (0);
	fd = open(file, O_RDONLY);
	i = 0;
	game->map[i] = get_next_line(fd);
	while (game->map[i])
	{
		i++;
		game->map[i] = get_next_line(fd);
	}
	return (game->map);
}
