/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 05:20:14 by asoria            #+#    #+#             */
/*   Updated: 2025/06/07 22:10:05 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
cspdiuxX%
 malloc, free, write, va_start, va_arg, va_copy, va_end.
*/

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	int		i;
	va_list	args;

	va_start(args, fmt);
	i = 0;
	while (fmt[i] != '\0')
	{
		if (fmt[i] == '%')
		{
			i++;
			if (fmt[i] == 'c')
				return (ft_putchar(va_arg(args, int)));
			else if (fmt[i] == 's')
				return (ft_putstr(va_arg(args, char *)));
			else if (fmt[i] == 'd' || fmt[i] == 'i')
				return (ft_putnbr(va_arg(args, int)));
			else if (fmt[i] == 'p')
				return (print_addr(va_arg(args, void *)));
			else if (fmt[i] == 'u')
				return (print_unsigned(va_arg(args, unsigned int)));
			else if (fmt[i] == 'x')
				return (print_hex(va_arg(args, unsigned int), "0123456789abcdef"));
			else if (fmt[i] == 'X')
				return (print_hex(va_arg(args, unsigned int), "0123456789ABCDEF"));
			else if (fmt[i] != '%')
				write(1, &fmt[i], 1);
		}
		i++;
	}
	va_end(args);
	return (i);
}
