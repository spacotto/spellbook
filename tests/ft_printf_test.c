/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:26:18 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/31 14:02:56 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	puts("=== CONV NO FLAG");
	
	{
		printf("ORIGINAL | cspdiuxX%\n");
		ft_printf("CUSTOM	| cspdiuxX%\n");
	}

	puts("\n=== ZERO");
	
	{
		int i = 0;
		printf("ORIGINAL | %d\n", i);
		ft_printf("CUSTOM	| %d\n", i);
	}
	
	puts("\n=== INT MIN");
	
	{
		int i = -2147483648;
		printf("ORIGINAL | %d\n", i);
		ft_printf("CUSTOM	| %d\n", i);
	}

	puts("\n=== INT MAX");
	
	{
		int i = 2147483647;
		printf("ORIGINAL | %d\n", i);
		ft_printf("CUSTOM	| %d\n", i);
	}

	puts("\n=== EMPTY STRING");
	
	{
		char s[1024] = "";
		printf("ORIGINAL | %s\n", s);
		ft_printf("CUSTOM	| %s\n", s);
	}

	puts("\n=== NULL POINTER");
	
	{
		char s[];
		printf("ORIGINAL | %s\n", &s[0]);
		ft_printf("CUSTOM	| %s\n", &s[0]);
	}

	puts("\n=== ALL FLAGS");
	
	{
		char c =  48;
		char s[1024] = "string";
		int i = 2147483642;
		unsigned int u = 2147483642;
		
		printf("=== ORIGINAL\n
				CHARACTER | %c\n
				STRING	  | %s\n
				ADRESS	  | %p\n
				DECIMAL	  | %d\n
				INT		  | %i\n
				UNSIGNED  | %u\n
				HEX LOWER | %x\n
				HEX UPPER | %X\n
				NO FLAG	  | %%\n\n", 
				c, s, &s[0], i, i, u, u, u);
		
		ft_printf("=== CUSTOM\n
				CHARACTER | %c\n
				STRING	  | %s\n
				ADRESS	  | %p\n
				DECIMAL	  | %d\n
				INT		  | %i\n
				UNSIGNED  | %u\n
				HEX LOWER | %x\n
				HEX UPPER | %X\n
				NO FLAG	  | %%\n\n", 
				c, s, &s[0], i, i, u, u, u);
	}

	puts("\n=== NULL POINTER");
	
	{
		void *p = NULL;
		printf("ORIGINAL | %p\n", &p);
		ft_printf("CUSTOM	| %p\n", &p);
	}

	return (0);
}
