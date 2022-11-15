/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:53:16 by mamazzal          #+#    #+#             */
/*   Updated: 2022/10/29 17:08:33 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *s, ...);
int		ft_get_format(va_list args, const char *s, int i);
int		ft_hexadecimal(unsigned long x, char c);
int		ft_nbrlen(int nbr);
int		ft_print_address(unsigned long i);
int		ft_print_unsi(unsigned int n);
int		ft_putchar(char c);
int		ft_putnbr(long n);
int		ft_putstr(char *s);

#endif
