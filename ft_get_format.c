/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:53:16 by mamazzal          #+#    #+#             */
/*   Updated: 2022/10/29 17:07:41 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_get_format(va_list args, const char *s, int i)
{
	if (s[i] == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (s[i] == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (s[i] == 'd' || s[i] == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (s[i] == 'p')
		return (ft_print_address(va_arg(args, unsigned long)));
	else if (s[i] == 'u')
		return (ft_print_unsi(va_arg(args, unsigned int)));
	else if (s[i] == 'x' || s[i] == 'X')
		return (ft_hexadecimal(va_arg(args, unsigned int), s[i]));
	else if (s[i] == '%')
		return (ft_putchar('%'));
	else
		return (0);
}
