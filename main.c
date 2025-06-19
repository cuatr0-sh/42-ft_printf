/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <asoria@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 07:08:23 by asoria            #+#    #+#             */
/*   Updated: 2025/06/18 10:45:27 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//cspdiuxX%

#include "ft_printf.h"

int	main(void)
{
	char	c;
	char	*str;
	int		n;
	int		*ptr_to_n;
	int		count;

	c = 'C';
	str = "String";
	n = -42;
	ptr_to_n = &n;

	count = 0;
	printf("PRINTF\n\n");
	printf("char: %c\nstr: %s\nint(%%d): %d\nptr: %p\nint (%%i)%i\nunsigned: %u\nhex: %x\nHEX: %X\n", c, str, n, ptr_to_n, n, n, n, n);
	printf("Count: %d\n\n", count);
	fflush(stdout);
	
	count = 0;
	ft_printf("char: %c\nstr: %s\nint(%%d): %d\nptr: %p\nint (%%i)%i\nunsigned: %u\nhex: %x\nHEX: %X\n", c, str, n, ptr_to_n, n, n, n, n);
	ft_printf("Count: %d\n\n", count);
	return (0);
}
