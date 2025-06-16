/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 07:08:23 by asoria            #+#    #+#             */
/*   Updated: 2025/06/16 08:27:01 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//cspdiuxX%

#include "ft_printf.h"

int	main(void)
{
	
	int		count;
	int		ft_count;

	int	n;
	

	n = 2147483650;
	
	count = 0;
	ft_count = 0;

	count += printf("%d\n", n);
	ft_count += ft_printf("%d\n", n);
	
	printf("\nCount: %d\n", count);
	ft_printf("Count: %d\n", count);

	printf("\n");

	return (0);
}
