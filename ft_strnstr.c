/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:39:34 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/19 11:51:18 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_strnstr(char *str, char *to_find, int n)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	if (n == 0)
		return (0);
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while ((str[i + j] == to_find[j])
			&& (str[i + j] != '\0') && ((i + j) < n))
		{
			if (to_find[j + 1] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
