/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:56:05 by spacotto          #+#    #+#             */
/*   Updated: 2026/01/06 18:02:21 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"
#include "inc/printf.h"

int	main()
{
	ft_putendl_fd("\n================================= ft_atoi_base.c\n", 1);

	// 1. Basic Decimal (Base 10)
	ft_printf("=== Base 10 Tests\n");
	ft_printf("Arg  | %s\nBase | %i\nInt  | %i\n\n", "12345", 10, ft_atoi_base("12345", 10));
	ft_printf("Arg  | %s\nBase | %i\nInt  | %i\n\n", "-987", 10, ft_atoi_base("-987", 10));
	ft_printf("Arg  | %s\nBase | %i\nInt  | %i\n\n", "+42", 10, ft_atoi_base("+42", 10));

	// 2. Binary (Base 2)
	ft_printf("=== Base 2 Tests\n");
	ft_printf("Arg  | %s\nBase | %i\nInt  | %i\n\n", "1010", 2, ft_atoi_base("1010", 2));
	ft_printf("Arg  | %s\nBase | %i\nInt  | %i\n\n", "-1111", 2, ft_atoi_base("-1111", 2));
	ft_printf("Arg  | %s\nBase | %i\nInt  | %i\n\n", "1", 2, ft_atoi_base("1", 2));

	// 3. Octal (Base 8)
	ft_printf("=== Base 8 Tests\n");
	ft_printf("Arg  | %s\nBase | %i\nInt  | %i\n\n", "10", 8, ft_atoi_base("10", 8));		// 8
	ft_printf("Arg  | %s\nBase | %i\nInt  | %i\n\n", "77", 8, ft_atoi_base("77", 8));		// 63
	ft_printf("Arg  | %s\nBase | %i\nInt  | %i\n\n", "-100", 8, ft_atoi_base("-100", 8));	// -64

	// 4. Hexadecimal (Base 16)
	ft_printf("=== Base 16 Tests\n");
	ft_printf("Arg  | %s\nBase | %i\nInt  | %i\n\n", "1A", 16, ft_atoi_base("1A", 16));   	// 26
	ft_printf("Arg  | %s\nBase | %i\nInt  | %i\n\n", "FF", 16, ft_atoi_base("FF", 16));		// 255
	ft_printf("Arg  | %s\nBase | %i\nInt  | %i\n\n", "-f0", 16, ft_atoi_base("-f0", 16));	// -240
	ft_printf("Arg  | %s\nBase | %i\nInt  | %i\n\n", "+abc", 16, ft_atoi_base("+abc", 16));	// 2748

	// 5. Edge Cases (Whitespace and Sign)
	ft_printf("=== Edge Case Tests\n");
	ft_printf("Arg  | %s\nBase | %i\nInt  | %i\n\n", "  \t-255", 10, ft_atoi_base("  \t-255", 10)); 
	ft_printf("Arg  | %s\nBase | %i\nInt  | %i\n\n", "+abc", 16, ft_atoi_base("+abc", 16));
	ft_printf("Arg  | %s\nBase | %i\nInt  | %i\n\n", "0", 10, ft_atoi_base("0", 10));

	// 6. Base Limit Test (Illustrates current function's flaw)
	ft_printf("=== Flaw Illustration Test (Base 8 with invalid digit)\n");
	ft_printf("Arg  | %s\nBase | %i\nInt  | %i\n\n", "789", 8, ft_atoi_base("789", 8));
	
	return (0);
}
