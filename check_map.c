/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:16:51 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/18 14:00:37 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_map(char **map)
{
	if (check_map_lr(map) && check_map_ud(map) && check_is_rectangle(map) && check_map_in(map) && check_path(map))
		return (1);
	return (0);
}
