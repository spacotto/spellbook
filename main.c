/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:08:53 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/16 17:15:43 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <bsd/string.h>

int	main()
{
	puts("\n=== ft_isalpha.c ===");
	
	{
		printf("ORIGINAL: %d | CUSTOM: %d\n", isalpha('A'), ft_isalpha('A'));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isalpha(' '), ft_isalpha(' '));
	}
	
	puts("\n=== ft_isdigit.c ===");

	{
		printf("ORIGINAL: %d | CUSTOM: %d\n", isdigit('3'), ft_isdigit('3'));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isdigit('C'), ft_isdigit('C'));
	}

	puts("\n=== ft_isalnum.c ===");

	{
		printf("ORIGINAL: %d | CUSTOM: %d\n", isalnum('3'), ft_isalnum('3'));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isalnum('c'), ft_isalnum('c'));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isalnum(' '), ft_isalnum(' '));
	}

	puts("\n=== ft_isascii.c ===");

	{
                printf("ORIGINAL: %d | CUSTOM: %d\n", isascii(0), ft_isascii(0));
                printf("ORIGINAL: %d | CUSTOM: %d\n", isascii(127), ft_isascii(127));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isascii(128), ft_isascii(128));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isascii(-1), ft_isascii(-1));
        }

	puts("\n=== ft_isprint.c ===");

	{
                printf("ORIGINAL: %d | CUSTOM: %d\n", isprint(31), ft_isprint(31));
                printf("ORIGINAL: %d | CUSTOM: %d\n", isprint(32), ft_isprint(32));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isprint(126), ft_isprint(126));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isprint(127), ft_isprint(127));
        }

	puts("\n=== ft_strlen.c ===");

	{
		char *s = "Excusatio non petita, accusatio manifesta";
		printf("ORIGINAL: %lu | CUSTOM: %zu\n", strlen(s), ft_strlen(s));
	}

	puts("\n=== ft_memset.c ===");

	{
		char o[10] = "000000000";
		char c[10] = "000000000";
		puts("=== BEFORE");
		printf("ORIGINAL | %s\nCUSTOM	 | %s\n", o, c);
		puts("=== AFTER");
		memset(o, 'c', 3);
		ft_memset(c, 'c', 3);
		printf("ORIGINAL | %s\nCUSTOM   | %s\n", o, c);
	}

	puts("\n=== ft_bzero.c ===");

	{
                char o[10] = "000000000";
                char c[10] = "000000000";
		size_t n = 8;
                puts("=== BEFORE");
                printf("ORIGINAL | %s\nCUSTOM   | %s\n\n", o, c);
                puts("=== AFTER");
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

	puts("\n=== ft_memmove.c ===");

	{
		char a1[1024] = "000111222333444555666";
		char a2[1024] = "000111222333444555666";
                puts("=== SRC = DST");
                puts("=== BEFORE");
                printf("C  SRC: %p | %s\n", &a1, a1);
		printf("C  DST: %p | %s\n", &a1, a1);
                printf("42 SRC: %p | %s\n", &a2, a2);
                printf("42 DST: %p | %s\n", &a2, a2);
		puts("=== AFTER");
                memmove(a1, a1, 3);
                printf("C  SRC: %p | %s\n", &a1, a1);
		printf("C  DST: %p | %s\n", &a1, a1);
	        ft_memmove(a2, a2, 3);
                printf("42 SRC: %p | %s\n", &a2, a2);
                printf("42 DST: %p | %s\n", &a2, a2);
	}
	
	{	
		char a1[1024] = "000111222333444555666";
                char a2[1024] = "000111222333444555666";
		puts("=== SRC > DST");
                puts("=== BEFORE");
                printf("C  SRC: %p | %s\n", &a1 + 3, a1 + 3);
                printf("C  DST: %p | %s\n", &a1, a1);
                printf("42 SRC: %p | %s\n", &a2 + 3, a2 + 3);
                printf("42 DST: %p | %s\n", &a2, a2);
                puts("=== AFTER");
                memmove(a1, a1 + 3, 3);
                printf("C  SRC: %p | %s\n", &a1 + 3, a1 + 3);
                printf("C  DST: %p | %s\n", &a1, a1);
                ft_memmove(a2, a2 + 3, 3);
                printf("42 SRC: %p | %s\n", &a2 + 3, a2 + 3);
                printf("42 DST: %p | %s\n", &a2, a2);
	}

	{
		char a1[1024] = "000111222333444555666";
                char a2[1024] = "000111222333444555666";
		puts("=== SRC < DST");
                puts("=== BEFORE");
                printf("C  SRC: %p | %s\n", &a1, a1);
                printf("C  DST: %p | %s\n", &a1 + 3, a1 + 3);
                printf("42 SRC: %p | %s\n", &a2, a2);
                printf("42 DST: %p | %s\n", &a2 + 3, a2 + 3);
                puts("=== AFTER");
                memmove(a1 + 3, a1, 3);
                printf("C  SRC: %p | %s\n", &a1, a1);
                printf("C  DST: %p | %s\n", &a1 + 3, a1 + 3);
                ft_memmove(a2 + 3, a2, 3);
                printf("42 SRC: %p | %s\n", &a2, a2);
                printf("42 DST: %p | %s\n", &a2 + 3, a2 + 3);
	}
	
	puts("\n=== ft_strlcpy.c ===");

	{
		char d1[] = "000000000";
                char d2[] = "000000000";
                char src[] = "";
		puts("=== SRC == NUL");
		puts("=== BEFORE");
		printf("   SRC: %s\n", src);
		printf("C  DST: %s\n", d1);
	        printf("42 DST: %s\n", d2);	
		puts("=== AFTER");
		printf("   SRC: %zu | %s\n", ft_strlen(src), src);
                printf("C  DST: %zu | %s\n", strlcpy(d1, src, 3), d1);
                printf("42 DST: %zu | %s\n", ft_strlcpy(d2, src, 3), d2);
	}

	{
                char d1[] = "000000000";
                char d2[] = "000000000";
                char src[] = "12345";
		puts("=== SIZE == 0");
                puts("=== BEFORE");
                printf("   SRC: %s\n", src);
                printf("C  DST: %s\n", d1);
                printf("42 DST: %s\n", d2);
                puts("=== AFTER");
                printf("   SRC: %zu | %s\n", ft_strlen(src), src);
                printf("C  DST: %zu | %s\n", strlcpy(d1, src, 0), d1);
                printf("42 DST: %zu | %s\n", ft_strlcpy(d2, src, 0), d2);
        }

	{
                char d1[] = "000000000";
                char d2[] = "000000000";
                char src[] = "12345";
                puts("=== SRC < SIZE");
		puts("=== BEFORE");
                printf("   SRC: %s\n", src);
                printf("C  DST: %s\n", d1);
                printf("42 DST: %s\n", d2);
                puts("=== AFTER");
                printf("   SRC: %zu | %s\n", ft_strlen(src), src);
                printf("C  DST: %zu | %s\n", strlcpy(d1, src, 10), d1);
                printf("42 DST: %zu | %s\n", ft_strlcpy(d2, src, 10), d2);
        }
	
	{
                char d1[] = "000000000";
                char d2[] = "000000000";
                char src[] = "12345";
		puts("=== SRC > SIZE");
                puts("=== BEFORE");
                printf("   SRC: %s\n", src);
                printf("C  DST: %s\n", d1);
                printf("42 DST: %s\n", d2);
                puts("=== AFTER");
                printf("   SRC: %zu | %s\n", ft_strlen(src), src);
                printf("C  DST: %zu | %s\n", strlcpy(d1, src, 3), d1);
                printf("42 DST: %zu | %s\n", ft_strlcpy(d2, src, 3), d2);
        }

	puts("\n=== ft_strlcat.c ===");

	{
                char d1[] = "000000000";
                char d2[] = "000000000";
                char src[] = "111111";
                puts("=== SIZE <= DST");
                puts("=== BEFORE");
                printf("   SRC: %s\n", src);
                printf("C  DST: %s\n", d1);
                printf("42 DST: %s\n", d2);
                puts("=== AFTER");
                printf("   SRC: %zu | %s\n", ft_strlen(src), src);
                printf("C  DST: %zu | %s\n", strlcat(d1, src, 3), d1);
                printf("42 DST: %zu | %s\n", ft_strlcat(d2, src, 3), d2);
        }

	{
                char d1[] = "000000000";
                char d2[] = "000000000";
                char src[] = "111111";
                puts("=== SIZE > DST");
                puts("=== BEFORE");
                printf("   SRC: %s\n", src);
                printf("C  DST: %s\n", d1);
                printf("42 DST: %s\n", d2);
                puts("=== AFTER");
                printf("   SRC: %zu | %s\n", ft_strlen(src), src);
                printf("C  DST: %zu | %s\n", strlcat(d1, src, 9), d1);
                printf("42 DST: %zu | %s\n", ft_strlcat(d2, src, 9), d2);
        }

	{
		char d1[] = "000000000";
                char d2[] = "000000000";
		char src[] = "111111";
		puts("=== SIZE = SRC + DST");
                puts("=== BEFORE");
                printf("   SRC: %s\n", src);
                printf("C  DST: %s\n", d1);
                printf("42 DST: %s\n", d2);
                puts("=== AFTER");
                printf("   SRC: %zu | %s\n", ft_strlen(src), src);
                printf("C  DST: %zu | %s\n", strlcat(d1, src, 15), d1);
                printf("42 DST: %zu | %s\n", ft_strlcat(d2, src, 15), d2);
	}
	return(0);
}
