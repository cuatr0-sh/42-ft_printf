/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_print_addr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 09:32:42 by asoria            #+#    #+#             */
/*   Updated: 2025/06/07 21:24:11 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printf_print_addr(void *ptr)
{
	unsigned long	addr;
	char			buffer[17];
	char			*digits;
	int				i;

	digits = "0123456789abcdef";
	ft_putstr("0x");
	addr = (unsigned long)ptr;
	if (addr == 0)
	{
		ft_putchar('0');
		return ;
	}
	i = 0;
	while (addr)
	{
		buffer[i++] = digits[addr & 0xF];
		addr >>= 4;
	}
	while (i--)
		ft_putchar(buffer[i]);
}
