/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:08:53 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/17 10:31:07 by spacotto         ###   ########.fr       */
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
	puts("\n================================= ft_isalpha.c\n");
	
	{
		printf("ORIGINAL: %d | CUSTOM: %d\n", isalpha('A'), ft_isalpha('A'));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isalpha(' '), ft_isalpha(' '));
	}
	
	puts("\n================================= ft_isdigit.c\n");

	{
		printf("ORIGINAL: %d | CUSTOM: %d\n", isdigit('3'), ft_isdigit('3'));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isdigit('C'), ft_isdigit('C'));
	}

	puts("\n================================= ft_isalnum.c\n");

	{
		printf("ORIGINAL: %d | CUSTOM: %d\n", isalnum('3'), ft_isalnum('3'));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isalnum('c'), ft_isalnum('c'));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isalnum(' '), ft_isalnum(' '));
	}

	puts("\n================================= ft_isascii.c\n");

	{
                printf("ORIGINAL: %d | CUSTOM: %d\n", isascii(0), ft_isascii(0));
                printf("ORIGINAL: %d | CUSTOM: %d\n", isascii(127), ft_isascii(127));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isascii(128), ft_isascii(128));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isascii(-1), ft_isascii(-1));
        }

	puts("\n================================= ft_isprint.c\n");

	{
                printf("ORIGINAL: %d | CUSTOM: %d\n", isprint(31), ft_isprint(31));
                printf("ORIGINAL: %d | CUSTOM: %d\n", isprint(32), ft_isprint(32));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isprint(126), ft_isprint(126));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isprint(127), ft_isprint(127));
        }

	puts("\n================================= ft_strlen.c\n");

	{
		char *s = "Excusatio non petita, accusatio manifesta";
		printf("ORIGINAL: %lu | CUSTOM: %zu\n", strlen(s), ft_strlen(s));
	}

	puts("\n================================= ft_memset.c\n");

	{
		char s1[] = "000000000";
		char s2[] = "000000000";
		puts("=== BEFORE");
		printf("ORIGINAL | %s\nCUSTOM	 | %s\n", s1, s2);
		puts("=== AFTER");
		memset(s1, 'c', 3);
		ft_memset(s2, 'c', 3);
		printf("ORIGINAL | %s\nCUSTOM   | %s\n", s1, s2);
		printf("=== FINAL CHECK: %s\n", (strcmp(s1, s2)) ? "KO!" : "OK!");
	}

	puts("\n================================= ft_bzero.c\n");

	{
                char s1[10] = "000000000";
                char s2[10] = "000000000";
		size_t n = 8;
                puts("=== BEFORE");
                printf("ORIGINAL | %s\nCUSTOM   | %s\n", s1, s2);
                puts("=== AFTER");
                bzero(s1, n);
                ft_bzero(s2, n);
                printf("ORIGINAL | %s\nCUSTOM   | %s\n", &s1[n], &s2[n]);
		printf("=== FINAL CHECK: %s\n", (strcmp(s1, s2)) ? "KO!" : "OK!");
        }

	puts("\n================================= ft_memcpy.c\n");

	{	
                char d1[1024];
                char d2[1024];
                char s[] = "Audaces fortuna iuvat";
                printf("=== BEFORE\n");
		printf("   SRC: %p | %s\n", s, &s[0]);
	        printf(" C DST: %p | %s\n", d1, &d1[0]);
		printf("42 DST: %p | %s\n", d2, &d2[0]);
                printf("=== AFTER\n");
		printf("   SRC: %p | %s\n", s, &s[0]);
		memcpy(d1, s, 7);
		printf(" C DST: %p | %s\n", d1, &d1[0]);
		ft_memcpy(d2, s, 7);
		printf("42 DST: %p | %s\n", d2, &d2[0]);
		printf("=== FINAL CHECK: %s\n", (strcmp(d1, d2)) ? "KO!" : "OK!");
	}

	puts("\n================================= ft_memmove.c\n");

	{
		char s1[] = "000111222333444555666";
		char s2[] = "000111222333444555666";
                puts("=== SRC = DST");
                puts("=== BEFORE");
                printf("C  SRC: %p | %s\n", &s1, s1);
		printf("C  DST: %p | %s\n", &s1, s1);
                printf("42 SRC: %p | %s\n", &s2, s2);
                printf("42 DST: %p | %s\n", &s2, s2);
		puts("=== AFTER");
                memmove(s1, s1, 3);
                printf("C  SRC: %p | %s\n", &s1, s1);
		printf("C  DST: %p | %s\n", &s1, s1);
	        ft_memmove(s2, s2, 3);
                printf("42 SRC: %p | %s\n", &s2, s2);
                printf("42 DST: %p | %s\n", &s2, s2);
		printf("=== FINAL CHECK: %s\n\n", (strcmp(s1, s2)) ? "KO!" : "OK!");
	}
	
	{	
		char s1[] = "000111222333444555666";
                char s2[] = "000111222333444555666";
		puts("=== SRC > DST");
                puts("=== BEFORE");
                printf("C  SRC: %p | %s\n", &s1 + 3, s1 + 3);
                printf("C  DST: %p | %s\n", &s1, s1);
                printf("42 SRC: %p | %s\n", &s2 + 3, s2 + 3);
                printf("42 DST: %p | %s\n", &s2, s2);
                puts("=== AFTER");
                memmove(s1, s1 + 3, 3);
                printf("C  SRC: %p | %s\n", &s1 + 3, s1 + 3);
                printf("C  DST: %p | %s\n", &s1, s1);
                ft_memmove(s2, s2 + 3, 3);
                printf("42 SRC: %p | %s\n", &s2 + 3, s2 + 3);
                printf("42 DST: %p | %s\n", &s2, s2);
		printf("=== FINAL CHECK: %s\n\n", (strcmp(s1, s2)) ? "KO!" : "OK!");
	}

	{
		char s1[] = "000111222333444555666";
                char s2[] = "000111222333444555666";
		puts("=== SRC < DST");
                puts("=== BEFORE");
                printf("C  SRC: %p | %s\n", &s1, s1);
                printf("C  DST: %p | %s\n", &s1 + 3, s1 + 3);
                printf("42 SRC: %p | %s\n", &s2, s2);
                printf("42 DST: %p | %s\n", &s2 + 3, s2 + 3);
                puts("=== AFTER");
                memmove(s1 + 3, s1, 3);
                printf("C  SRC: %p | %s\n", &s1, s1);
                printf("C  DST: %p | %s\n", &s1 + 3, s1 + 3);
                ft_memmove(s2 + 3, s2, 3);
                printf("42 SRC: %p | %s\n", &s2, s2);
                printf("42 DST: %p | %s\n", &s2 + 3, s2 + 3);
		printf("=== FINAL CHECK: %s\n", (strcmp(s1, s2)) ? "KO!" : "OK!");
	}
	
	puts("\n================================= ft_strlcpy.c\n");

	{
		char d1[] = "000000000";
                char d2[] = "000000000";
                char s[] = "";
		puts("=== SRC == NUL");
		puts("=== BEFORE");
		printf("   SRC: %s\n", s);
		printf("C  DST: %s\n", d1);
	        printf("42 DST: %s\n", d2);	
		puts("=== AFTER");
		printf("   SRC: %zu | %s\n", ft_strlen(s), s);
                printf("C  DST: %zu | %s\n", strlcpy(d1, s, 3), d1);
                printf("42 DST: %zu | %s\n", ft_strlcpy(d2, s, 3), d2);
		printf("=== FINAL CHECK: %s\n\n", (strcmp(d1, d2)) ? "KO!" : "OK!");
	}

	{
                char d1[] = "000000000";
                char d2[] = "000000000";
                char s[] = "12345";
		puts("=== SIZE == 0");
                puts("=== BEFORE");
                printf("   SRC: %s\n", s);
                printf("C  DST: %s\n", d1);
                printf("42 DST: %s\n", d2);
                puts("=== AFTER");
                printf("   SRC: %zu | %s\n", ft_strlen(s), s);
                printf("C  DST: %zu | %s\n", strlcpy(d1, s, 0), d1);
                printf("42 DST: %zu | %s\n", ft_strlcpy(d2, s, 0), d2);
		printf("=== FINAL CHECK: %s\n\n", (strcmp(d1, d2)) ? "KO!" : "OK!");
        }

	{
                char d1[] = "000000000";
                char d2[] = "000000000";
                char s[] = "12345";
                puts("=== SRC < SIZE");
		puts("=== BEFORE");
                printf("   SRC: %s\n", s);
                printf("C  DST: %s\n", d1);
                printf("42 DST: %s\n", d2);
                puts("=== AFTER");
                printf("   SRC: %zu | %s\n", ft_strlen(s), s);
                printf("C  DST: %zu | %s\n", strlcpy(d1, s, 10), d1);
                printf("42 DST: %zu | %s\n", ft_strlcpy(d2, s, 10), d2);
		printf("=== FINAL CHECK: %s\n\n", (strcmp(d1, d2)) ? "KO!" : "OK!");
        }
	
	{
                char d1[] = "000000000";
                char d2[] = "000000000";
                char s[] = "12345";
		puts("=== SRC > SIZE");
                puts("=== BEFORE");
                printf("   SRC: %s\n", s);
                printf("C  DST: %s\n", d1);
                printf("42 DST: %s\n", d2);
                puts("=== AFTER");
                printf("   SRC: %zu | %s\n", ft_strlen(s), s);
                printf("C  DST: %zu | %s\n", strlcpy(d1, s, 3), d1);
                printf("42 DST: %zu | %s\n", ft_strlcpy(d2, s, 3), d2);
		printf("=== FINAL CHECK: %s\n", (strcmp(d1, d2)) ? "KO!" : "OK!");
        }

	puts("\n================================= ft_strlcat.c\n");

	{
                char d1[] = "000000000";
                char d2[] = "000000000";
                char s[] = "111111";
                puts("=== SIZE <= DST");
                puts("=== BEFORE");
                printf("   SRC: %s\n", s);
                printf("C  DST: %s\n", d1);
                printf("42 DST: %s\n", d2);
                puts("=== AFTER");
                printf("   SRC: %zu | %s\n", ft_strlen(s), s);
                printf("C  DST: %zu | %s\n", strlcat(d1, s, 3), d1);
                printf("42 DST: %zu | %s\n", ft_strlcat(d2, s, 3), d2);
		printf("=== FINAL CHECK: %s\n\n", (strcmp(d1, d2)) ? "KO!" : "OK!");
        }

	{
                char d1[] = "000000000";
                char d2[] = "000000000";
                char s[] = "111111";
                puts("=== SIZE > DST");
                puts("=== BEFORE");
                printf("   SRC: %s\n", s);
                printf("C  DST: %s\n", d1);
                printf("42 DST: %s\n", d2);
                puts("=== AFTER");
                printf("   SRC: %zu | %s\n", ft_strlen(s), s);
                printf("C  DST: %zu | %s\n", strlcat(d1, s, 9), d1);
                printf("42 DST: %zu | %s\n", ft_strlcat(d2, s, 9), d2);
		printf("=== FINAL CHECK: %s\n\n", (strcmp(d1, d2)) ? "KO!" : "OK!");
        }

	{
		char d1[] = "000000000";
                char d2[] = "000000000";
		char s[] = "111111";
		puts("=== SIZE = SRC + DST");
                puts("=== BEFORE");
                printf("   SRC: %s\n", s);
                printf("C  DST: %s\n", d1);
                printf("42 DST: %s\n", d2);
                puts("=== AFTER");
                printf("   SRC: %zu | %s\n", ft_strlen(s), s);
                printf("C  DST: %zu | %s\n", strlcat(d1, s, 15), d1);
                printf("42 DST: %zu | %s\n", ft_strlcat(d2, s, 15), d2);
		printf("=== FINAL CHECK: %s\n", (strcmp(d1, d2)) ? "KO!" : "OK!");
	}
	return(0);
}
