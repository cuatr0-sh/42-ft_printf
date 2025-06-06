/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 07:08:23 by asoria            #+#    #+#             */
/*   Updated: 2025/06/05 22:48:05 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//cspdiuxX%

#include "ft_printf.h"

int	main(void)
{
	int	n = -42;
	char	c = 'C';
	char	*str = "Hello World!";
	void	*ptr = &n;
	
	printf("PRINTF\n%c%s%p%d%i%u%x%X%%\n", c, str, &ptr, n, n, n, n, n);
	ft_printf("FT_PRINTF\n%c%s%p%d%i%u%x%X\n", c, str, &ptr, n, n, n, n, n);

	return (0);
}
