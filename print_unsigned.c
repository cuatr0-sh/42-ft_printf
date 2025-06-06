/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42imadrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 22:40:25 by asoria            #+#    #+#             */
/*   Updated: 2025/06/05 22:40:46 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int num)
{
	int	n;

	n = 0;
	if (num > 9)
	{
		n += ft_print_unsigned(num / 10);
	}
	return (n += ft_putchar(num % 10 + '0'));
}
