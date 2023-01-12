/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_name.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 20:38:01 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/31 16:52:06 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_map_name(char *name)
{
	char	*arr;
	int		i;
	int		j;

	arr = ".ber";
	j = 3;
	i = ft_strlen(name) - 1;
	while (j >= 0)
	{
		if (name[i] != arr[j])
		{
			ft_printf("Error!\n");
			return (0);
		}
		j--;
	i--;
	}
	return (1);
}
