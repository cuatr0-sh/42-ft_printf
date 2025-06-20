/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_print_addr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 09:32:42 by asoria            #+#    #+#             */
/*   Updated: 2025/06/11 21:26:37 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_addr(void *ptr)
{
	unsigned long	addr;
	char			buffer[17];
	char			*digits;
	int				i;
	int				count;

	digits = "0123456789abcdef";
	count = 0;
	count += ft_putstr("0x");
	addr = (unsigned long)ptr;
	if (addr == 0)
	{
		count += ft_putchar('0');
		return (3);
	}
	i = 0;
	while (addr)
	{
		buffer[i++] = digits[addr & 0xF];
		addr >>= 4;
	}
	while (i--)
		count += ft_putchar(buffer[i]);
	return (count);
}
