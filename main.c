/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 07:08:23 by asoria            #+#    #+#             */
/*   Updated: 2025/05/30 07:22:50 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	a;

	a = 42;

	//ft_printf("str: %s, char: %c, int: %d, %%\n", "string", 'C', a);
	printf("str: %s, char: %c, int: %d, %%\n", "string", 'C', a);
	return (0);
}
