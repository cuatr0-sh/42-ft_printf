/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 05:20:14 by asoria            #+#    #+#             */
/*   Updated: 2025/06/04 11:04:15 by asoria           ###   ########.fr       */
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
			if (fmt[i] == '%')
				ft_putchar('%');
			else if (fmt[i] == 'c')
				ft_putchar(va_arg(args, int));
			else if (fmt[i] == 's')
				ft_putstr(va_arg(args, char *));
			else if (fmt[i] == 'd')
				ft_putnbr(va_arg(args, int));
			else if (fmt[i] == 'p')
				print_addr(va_arg(args, void *));
			//if (fmt[i] == 'i')
			//if (fmt[i] == 'u')
			//if (fmt[i] == 'x')
			//if (fmt[i] == 'X')
		}
		else if (fmt[i] != '%')
			write(1, &fmt[i], 1);
		i++;
	}
	va_end(args);
	return (i);
}
