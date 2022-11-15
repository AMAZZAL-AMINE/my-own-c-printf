/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:53:16 by mamazzal          #+#    #+#             */
/*   Updated: 2022/10/29 17:08:22 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fr, ...)
{
	int		i;
	int		count;
	va_list	args;

	va_start(args, fr);
	count = 0;
	i = 0;
	while (fr[i])
	{
		if (fr[i] != '%')
			count += ft_putchar(fr[i]);
		else if (fr[i] == '%')
		{
			count += ft_get_format(args, fr, i + 1);
			i++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
