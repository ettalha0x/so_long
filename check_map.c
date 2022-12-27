/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:16:51 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/24 12:30:54 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_map(t_game *g)
{
	if (check_ecp(g) && check_map_lr(g)
		&& check_map_ud(g) && check_is_rectangle(g)
		&& check_map_in(g) && check_path(g))
		return (1);
	return (0);
}
