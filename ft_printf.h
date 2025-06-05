/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 05:23:44 by asoria            #+#    #+#             */
/*   Updated: 2025/06/05 01:03:37 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

void	ft_putchar(int n);
void	ft_putnbr(int n);
void	ft_putstr(char *str);
int	ft_printf(char const *fmt, ...);
void	print_addr(void *ptr);

#endif
