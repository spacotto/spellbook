/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:08:53 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/15 16:41:35 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

int	main()
{
	{
		printf("=== ft_isalpha.c ===\n");
		printf("ORIGINAL: %d | CUSTOM: %d\n", isalpha('A'), ft_isalpha('A'));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isalpha(' '), ft_isalpha(' '));
	}
	
	{
		printf("\n=== ft_isdigit.c ===\n");
		printf("ORIGINAL: %d | CUSTOM: %d\n", isdigit('3'), ft_isdigit('3'));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isdigit('C'), ft_isdigit('C'));
	}

	{
		printf("\n=== ft_isalnum.c ===\n");
		printf("ORIGINAL: %d | CUSTOM: %d\n", isalnum('3'), ft_isalnum('3'));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isalnum('c'), ft_isalnum('c'));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isalnum(' '), ft_isalnum(' '));
	}

	{
                printf("\n=== ft_isascii.c ===\n");
                printf("ORIGINAL: %d | CUSTOM: %d\n", isascii(0), ft_isascii(0));
                printf("ORIGINAL: %d | CUSTOM: %d\n", isascii(127), ft_isascii(127));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isascii(128), ft_isascii(128));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isascii(-1), ft_isascii(-1));
        }

	{
                printf("\n=== ft_isprint.c ===\n");
                printf("ORIGINAL: %d | CUSTOM: %d\n", isprint(31), ft_isprint(31));
                printf("ORIGINAL: %d | CUSTOM: %d\n", isprint(32), ft_isprint(32));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isprint(126), ft_isprint(126));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isprint(127), ft_isprint(127));
        }

	{
		char *s = "Excusatio non petita, accusatio manifesta";
		printf("\n=== ft_strlen.c ===\n");
		printf("ORIGINAL: %lu | CUSTOM: %zu\n", strlen(s), ft_strlen(s));
	}

	{
		char o[10] = "000000000";
		char c[10] = "000000000";
		printf("\n=== ft_memset.c ===\n");	
		printf("BEFORE\n\n");
		printf("ORIGINAL | %s\nCUSTOM	 | %s\n\n", o, c);
		printf("AFTER\n\n");
		memset(o, 'c', 3);
		ft_memset(c, 'c', 3);
		printf("ORIGINAL | %s\nCUSTOM   | %s\n", o, c);
	}

	{
                char o[10] = "000000000";
                char c[10] = "000000000";
		size_t n = 8;
                printf("\n=== ft_bzero.c ===\n");
                printf("BEFORE\n\n");
                printf("ORIGINAL | %s\nCUSTOM   | %s\n\n", o, c);
                printf("AFTER\n\n");
                bzero(o, n);
                ft_bzero(c, n);
                printf("ORIGINAL | %s\nCUSTOM   | %s\n", &o[n], &c[n]);
        }

	{	
                char dest_o[1024];
                char dest_c[1024];
                char src[1024] = "Audaces fortuna iuvat";
                printf("\n=== ft_memcpy.c ===\n");
                printf("=== BEFORE\n");
		printf("src:    %p | %s\n", src, &src[0]);
	        printf("dest_o: %p | %s\n", dest_o, &dest_o[0]);
		printf("dest_c: %p | %s\n", dest_c, &dest_c[0]);
                printf("=== AFTER\n");
		printf("src:    %p | %s\n", src, &src[0]);
		memcpy(dest_o, src, 7);
		printf("dest_o: %p | %s\n", dest_o, &dest_o[0]);
		ft_memcpy(dest_c, src, 7);
		printf("dest_c: %p | %s\n", dest_c, &dest_c[0]);
	}
	return(0);
}
