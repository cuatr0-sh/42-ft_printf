/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 07:08:23 by asoria            #+#    #+#             */
/*   Updated: 2025/06/07 21:26:57 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//cspdiuxX%

#include "ft_printf.h"

int	main(void)
{
	int		n;
	char	c;
	char	*str;
	void	*ptr;

	n = 42;
	c = 'C';
	str = "Welcome to 42.";
	ptr = &n;
	printf("PRINTF\n%c%s%p%d%i%u%x%X%%\n", c, str, &ptr, n, n, n, n, n);
	ft_printf("FT_PRINTF\n%c%s%p%d%i%u%x%X\n", c, str, &ptr, n, n, n, n, n);
	return (0);
}
