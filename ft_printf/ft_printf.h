/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:47:47 by nettalha          #+#    #+#             */
/*   Updated: 2022/12/19 12:39:34 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>

int		ft_printf(const char *s, ...);
int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_putnbr(long n);
int		ft_putnbr_base(unsigned long n, char *base);
int		ft_put_pointer(unsigned long n);
int		ft_put_unsigned(unsigned int n);

#endif
