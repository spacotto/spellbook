/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:26:18 by spacotto          #+#    #+#             */
/*   Updated: 2025/11/07 15:09:16 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static int total = 0;
static int passed = 0;

void	check(int c, int ft)
{
		total++;
		if (c == ft)
		{
			passed++;
			printf(GREEN "\nOK! %d / %d\n\n" RESET, passed, total);
		}
		else
			printf(RED "\nKO! %d / %d\n\n" RESET, passed, total);
}

int	main()
{
	puts(RED "\n=== WARNING!" RESET);
	puts(YELLOW "FT_PRINTF | If you see this color, you're seeing my function." RESET);
	puts(CYAN "PRINTF	  | If you see this color, you're seeing the original function.\n" RESET);

	puts("=== FORMAT NO FLAG");
	
	{
		int ft = ft_printf(YELLOW "cspdiuxX\n" RESET);
		int c = printf(CYAN "cspdiuxX\n" RESET);
		check(c, ft);
	}

	puts("=== PRINT %c");
	{
		char ch = 'C';

		int ft = ft_printf(YELLOW "%c\n" RESET, ch);
		int c = printf(CYAN "%c\n" RESET, ch);

		check(c, ft);
	}

	puts("=== PRINT %s");
	{
		char s[1024] = "Hello World!";

		int ft = ft_printf(YELLOW "%s\n" RESET, s);
		int c = printf(CYAN "%s\n" RESET, s);

		check(c, ft);
	}

	puts("=== EMPTY STRING");
	
	{
		char s[1024] = "";
		
		int ft = ft_printf(YELLOW "(empty) %s\n" RESET, s);
		int c = printf(CYAN "(empty) %s\n" RESET, s);

		check(c, ft);
	}

	puts("=== PRINT %p");
	{
		char s[1024] = "Hello World!";
		
		int ft = ft_printf(YELLOW "%p\n" RESET, &s[0]);
		int c = printf(CYAN "%p\n" RESET, &s[0]);

		check(c, ft);
	}

	puts("=== NULL POINTER");
	
	{
		void *p = NULL;

		int ft = ft_printf(YELLOW "%p\n" RESET, p);
		int c = printf(CYAN "%p\n" RESET, p);

		check(c, ft);
	}

	puts("=== PRINT %d");
	{
		int d = 42;
		
		int ft = ft_printf(YELLOW "%d\n" RESET, d);
		int c = printf(CYAN "%d\n" RESET, d);

		check(c, ft);
	}

	puts("=== PRINT %i");
	{
		int i = 42;

		int ft = ft_printf(YELLOW "%d\n" RESET, i);
		int c = printf(CYAN "%i\n" RESET, i);

		check(c, ft);
	}

	puts("=== ZERO");
	
	{
		int i = 0;
		
		int ft = ft_printf(YELLOW "%d\n" RESET, i);
		int c = printf(CYAN "%d\n" RESET, i);

		check(c, ft);
	}
	
	puts("=== INT MIN");
	
	{
		int i = -2147483648;

		int ft = ft_printf(YELLOW "%d\n" RESET, i);
		int c = printf(CYAN "%d\n" RESET, i);

		check(c, ft);
	}

	puts("=== INT MAX");
	
	{
		int i = 2147483647;
		
		int ft = ft_printf(YELLOW "%d\n" RESET, i);
		int c = printf(CYAN "%d\n" RESET, i);

		check(c, ft);
	}

	puts("=== PRINT %u");
	{
		unsigned int u = 42;
		
		int ft = ft_printf(YELLOW "%u\n" RESET, u);
		int c = printf(CYAN "%u\n" RESET, u);

		check(c, ft);
	}

	puts("=== PRINT UNSIGNED INT MAX");
	{
		unsigned int u = 4294967295;
		
		int ft = ft_printf(YELLOW "%u\n" RESET, u);
		int c = printf(CYAN "%u\n" RESET, u);

		check(c, ft);
	}

	puts("=== PRINT UNSIGNED 0");
	{
		unsigned int u = 0;
		
		int ft = ft_printf(YELLOW "%u\n" RESET, u);
		int c = printf(CYAN "%u\n" RESET, u);

		check(c, ft);
	}

	puts("=== PRINT UNSIGNED NEGATIVE BEHAVIOUR");
	{
		unsigned int u = -42;
		
		int ft = ft_printf(YELLOW "%u\n" RESET, u);
		int c = printf(CYAN "%u\n" RESET, u);

		check(c, ft);
	}

	puts("=== PRINT %X");
	{
		unsigned int i = 2882400009;

		int ft = ft_printf(YELLOW "%X\n" RESET, i);
		int c = printf(CYAN "%X\n" RESET, i);

		check(c, ft);
	}

	puts("=== PRINT %x");
	{
		unsigned int i = 2882400009;

		int ft = ft_printf(YELLOW "%x\n" RESET, i);
		int c = printf(CYAN "%x\n" RESET, i);

		check(c, ft);
	}

	puts("=== PRINT %");
	{
		int ft = ft_printf(YELLOW "%%\n" RESET);
		int c = printf(CYAN "%%\n" RESET);

		check(c, ft);
	}

	puts("=== ALL FLAGS");
	
	{
		char s[1024] = "Hello World!";
		int i = 2147483642;
		unsigned int u = 2147483642;
		
		int ft = ft_printf(YELLOW "CHARACTER | %c\nSTRING	  | %s\nADRESS	  | %p\nDECIMAL	  | %d\nINT	  | %i\nUNSIGNED  | %u\nHEX LOWER | %x\nHEX UPPER | %X\nNO FLAG	  | %%\n\n" RESET, s[0], s, &s[0], i, i, u, i, i);
		
		int c = printf( CYAN "CHARACTER | %c\nSTRING	  | %s\nADRESS	  | %p\nDECIMAL	  | %d\nINT	  | %i\nUNSIGNED  | %u\nHEX LOWER | %x\nHEX UPPER | %X\nNO FLAG	  | %%\n" RESET, s[0], s, &s[0], i, i, u, i, i);

		check(c, ft);
	}

	printf("=== TEST SUMMARY : ");
	{
		if (passed == total)
			printf(GREEN "%d / %d\n\n" RESET, passed, total);	
		else
			printf(RED "%d / %d\n\n" RESET, passed, total);	
	}
	return (0);
}
