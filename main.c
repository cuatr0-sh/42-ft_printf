/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 07:08:23 by asoria            #+#    #+#             */
/*   Updated: 2025/06/20 16:53:54 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//cspdiuxX%

#include "ft_printf.h"

int	main(void)
{
	char	*str;

	str = "Welcome to 42";
	ft_printf("String to be printed: %s", str);
	return (0);
}
