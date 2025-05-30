/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 05:20:14 by asoria            #+#    #+#             */
/*   Updated: 2025/05/30 07:25:37 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
cspdiuxX%
 malloc, free, write, va_start, va_arg, va_copy, va_end.
*/

#include "ft_printf.h"

int	ft_printf(char const *fmt, ...)
{
	int	chars_printed;
	va_list	args;
	va_list	args_copy;

	chars_printed = 0;
	va_start(args, fmt);
	printf("asdf%s", va_arg(args, char *));
	va_end(args);

	return (0);
}
