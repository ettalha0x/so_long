/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:40:20 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/27 22:49:44 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_hook(int keycode, t_game *game)
{
	if (game->endgame == 0)
		move_player(keycode, game);
	return (0);
}

int	close_win(void)
{
	ft_printf("you quite the game\n");
	exit(0);
	return (0);
}
