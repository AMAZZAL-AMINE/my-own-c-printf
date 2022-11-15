/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:53:16 by mamazzal          #+#    #+#             */
/*   Updated: 2022/10/29 17:08:05 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_address(unsigned long i)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	count += ft_hexadecimal(i, 'x');
	return (count);
}
