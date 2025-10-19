/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:08:53 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/19 21:13:24 by spacotto         ###   ########.fr       */
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
		int tests[] = {31, 32, 64, 65, 90, 91, 96, 97, 122, 123, 126, 127, 300, 0, -1};
		for (int i = 0; tests[i]; i++) 
		{
			int og = isalpha(tests[i]);
			int ft = ft_isalpha(tests[i]);
			printf("TEST: %d ('%c')\nORIGINAL[%d] CUSTOM[%d]\n=== FINAL CHECK: %s\n\n",
				tests[i], tests[i], og, ft,
				(!!og == !!ft) ? "OK!" : "KO!");
		}
	}
	
	puts("\n================================= ft_isdigit.c\n");

	{
		int tests[] = {31, 32, 47, 48, 57, 58, 126, 127, 300, 0, -1};
		for (int i = 0; tests[i]; i++) 
		{
			int og = isdigit(tests[i]);
			int ft = ft_isdigit(tests[i]);
			printf("TEST: %d ('%c')\nORIGINAL[%d] CUSTOM[%d]\n=== FINAL CHECK: %s\n\n",
				tests[i], tests[i], og, ft,
				(!!og == !!ft) ? "OK!" : "KO!");
		}
	}
	
	puts("\n================================= ft_isalnum.c\n");

	{
		int tests[] = {31, 32, 47, 48, 57, 58, 64, 65, 90, 91, 96, 97, 122, 123, 126, 127, 300, 0, -1};
		for (int i = 0; tests[i]; i++) 
		{
			int og = isalnum(tests[i]);
			int ft = ft_isalnum(tests[i]);
			printf("TEST: %d ('%c')\nORIGINAL[%d] CUSTOM[%d]\n=== FINAL CHECK: %s\n\n",
				tests[i], tests[i], og, ft,
				(!!og == !!ft) ? "OK!" : "KO!");
		}
	}
	
	puts("\n================================= ft_isascii.c\n");

	{
		int tests[] = {1, 2, 3, 125, 126, 127, 300, 0, -1};
		for (int i = 0; tests[i]; i++) 
		{
			int og = isascii(tests[i]);
			int ft = ft_isascii(tests[i]);
			printf("TEST: %d ('%c')\nORIGINAL[%d] CUSTOM[%d]\n=== FINAL CHECK: %s\n\n",
				tests[i], tests[i], og, ft,
				(!!og == !!ft) ? "OK!" : "KO!");
		}
	}

	puts("\n================================= ft_isprint.c\n");

	{
		int tests[] = {31, 32, 126, 127, 300, 0, -1};
		for (int i = 0; tests[i]; i++) 
		{
			int og = isascii(tests[i]);
			int ft = ft_isascii(tests[i]);
			printf("TEST: %d ('%c')\nORIGINAL[%d] CUSTOM[%d]\n=== FINAL CHECK: %s\n\n",
				tests[i], tests[i], og, ft,
				(!!og == !!ft) ? "OK!" : "KO!");
		}
	}
	
	puts("\n================================= ft_strlen.c\n");

	{
		char *s = "Excusatio non petita, accusatio manifesta";
		printf("ORIGINAL: %ld | CUSTOM: %ld\n=== FINAL CHECK: %s\n",
			strlen(s), ft_strlen(s), (!!strlen(s) == !!ft_strlen(s)) ? "OK!" : "KO!");
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
		char d1[1024] = "0000000000";
		char d2[1024] = "0000000000";
		char s[] = "111111111111";
		size_t size = 5;
		puts("=== SIZE < SIZE[DST]");
		puts("=== note: the fn does NOT handle the reverse.");
		puts("=== BEFORE");
		printf("   SRC: [%zu]\n", ft_strlen(s));
		printf("C  DST: [%zu]\n", ft_strlen(d1));
		printf("42 DST: [%zu]\n", ft_strlen(d2));
		printf("  SIZE: [%zu]\n", size);
		puts("=== AFTER");
		printf("   SRC: [%zu]\n", ft_strlen(s));
		printf("C  DST: [%zu]\n", strlcat(d1, s, size));
		printf("42 DST: [%zu]\n", ft_strlcat(d2, s, size));
		printf("=== FINAL CHECK: %s\n\n", (strcmp(d1, d2)) ? "KO!" : "OK!");
        }

	{
		char d1[] = "000000000";
		char d2[] = "000000000";
		char s[] = "111111";

		puts("=== SIZE = 0");
		puts("=== BEFORE");
		printf("   SRC: [%zu]\n", ft_strlen(s));
		printf("C  DST: [%zu]\n", ft_strlen(d1));
		printf("42 DST: [%zu]\n", ft_strlen(d2));
		puts("=== AFTER");
		printf("   SRC: [%zu]\n", ft_strlen(s));
		printf("C  DST: [%zu]\n", strlcat(d1, s, 0));
		printf("42 DST: [%zu]\n", ft_strlcat(d2, s, 0));
		printf("=== FINAL CHECK: %s\n", (strcmp(d1, d2)) ? "KO!" : "OK!");
	}

	puts("\n================================= ft_toupper.c\n");
	
	{
		int tests[] = {31, 32, 42, 65, 90, 97, 122, 127, 300, 0, -1};
		for (int i = 0; tests[i]; i++) 
		{
			int og = toupper(tests[i]);
			int ft = ft_toupper(tests[i]);
			printf("TEST: %d ('%c')\nORIGINAL[%c] CUSTOM[%c]\n=== FINAL CHECK: %s\n\n",
				tests[i], tests[i], og, ft,
				(!!og == !!ft) ? "OK!" : "KO!");
		}
	}

	puts("\n================================= ft_tolower.c\n");

	{
		int tests[] = {31, 32, 42, 65, 90, 97, 122, 127, 300, 0, -1};
		for (int i = 0; tests[i]; i++) 
		{
			int og = tolower(tests[i]);
			int ft = ft_tolower(tests[i]);
			printf("TEST: %d ('%c')\nORIGINAL[%c] CUSTOM[%c]\n=== FINAL CHECK: %s\n\n",
				tests[i], tests[i], og, ft,
				(!!og == !!ft) ? "OK!" : "KO!");
		}
	}
		
	puts("\n================================= ft_strchr.c\n");

	{
		char s[] = "qwertcasdfgczxcvb";
		int c = 'c';
	
		puts("=== CHAR");
		printf("TEST STR | %s\n", s);
		printf("ORIGINAL | %s\n", strchr(s, c));
		printf("CUSTOM   | %s\n", ft_strchr(s, c));
		printf("=== FINAL CHECK: %s\n", (strcmp(strchr(s, c), ft_strchr(s, c))) ? "KO!" : "OK!");
	}

	{
		char s[] = "qwert\0casdfgczxcvb";
		int c = '\0';
		
		puts("\n=== CHAR = NUL");
		printf("TEST STR | %s\n", s);
		printf("ORIGINAL | %s\n", strchr(s, c));
		printf("CUSTOM   | %s\n", ft_strchr(s, c));
		printf("=== FINAL CHECK: unavailable\n");
	}

	puts("\n================================= ft_strrchr.c\n");

	{
		char s[] = "qwertcasdfgczxcvb";
		int c = 'c';
		
		puts("=== CHAR");
		printf("TEST STR | %s\n", s);
		printf("TEST STR | %s\n", s);
		printf("ORIGINAL | %s\n", strrchr(s, c));
		printf("CUSTOM   | %s\n", ft_strrchr(s, c));
		printf("=== FINAL CHECK: %s\n", (strcmp(strrchr(s, c), ft_strrchr(s, c))) ? "KO!" : "OK!");
        }

	{
		char s[] = "qwert\0casdfgczxcvb";
		int c = 'c';
		
		puts("\n=== CHAR = NUL");
		printf("TEST STR | %s\n", s);
		printf("TEST STR | %s\n", s);
		printf("ORIGINAL | %s\n", strrchr(s, c));
		printf("CUSTOM   | %s\n", ft_strrchr(s, c));
		printf("=== FINAL CHECK: unavailable\n");		
	}

	puts("\n================================= ft_strncmp.c\n");

	{
		char *s1 = "abc";
		char *s2 = "abc";
		size_t size = 3;

		puts("=== EQUAL STRINGS");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}

	{
		char s1[] = "abcdef";
		char s2[] = "abcxyz";
		size_t size = 3;

		puts("=== SAME 1ST 3 CHAR");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
		
	{
		char s1[] = "abcdef";
		char s2[] = "abcxyz";
		size_t size = 4;

		puts("=== DIFFERENT 4TH POSITION");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
	
	{
		char s1[] = "abc";
		char s2[] = "ABC";
		size_t size = 3;

		puts("=== CASE SENSITIVE");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
	
	{
		char s1[] = "abc";
		char s2[] = "xyz";
		size_t size = 0;

		puts("=== SIZE = 0");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
	
	{
		char s1[] = "abc";
		char s2[] = "abcd";
		size_t size = 3;

		puts("=== s1 SHORTER");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
	
	{
		char s1[] = "abcd";
		char s2[] = "abc";
		size_t size = 3;

		puts("=== s2 SHORTER");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
	
	{
		char s1[] = "abcd";
		char s2[] = "abdc";
		size_t size = 3;

		puts("=== DIFFERENCE BEFORE SIZE");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
	
	{
		char *s1= "";
		char *s2 = "";
		size_t size = 3;

		puts("=== BOTH EMPTY");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
		
	{
		char s1[] = "";
		char s2[] = "abc";
		size_t size = 3;

		puts("=== s1 EMPTY");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
		
	{
		char s1[] = "abc";
		char s2[] = "";
		size_t size = 3;

		puts("=== s2 EMPTY");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
		
	{
		char *s1 = "qwerty";
		char *s2 = "qwerty";
		size_t size = 100;

		puts("=== SIZE > BOTH");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
	
	{
		char s1[] = "ab";
		char s2[] = "abcdef";
		size_t size = 3;

		puts("=== SIZE > s1");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
		
	{
		char s1[] = "abcdef";
		char s2[] = "ab";
		size_t size = 3;

		puts("=== SIZE > s2");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
	
	puts("\n================================= ft_memchr.c\n");
		
	{
		char s[] = "0123456789";
		int c = '3';
		size_t n = 5;
	
		puts("=== c BEFORE size");
		printf("ORIGINAL | %p\n", memchr(s, c, n));
		printf("CUSTOM   | %p\n", ft_memchr(s, c, n));
		printf("=== FINAL CHECK: %s\n\n",
			(memchr(s, c, n) == ft_memchr(s, c, n)) ? "OK!" : "KO!");
		
	}	
	
	{
		char s[] = "0123456789";
		int c = '7';
		size_t n = 5;
	
		puts("=== c AFTER size");
		printf("ORIGINAL | %p\n", memchr(s, c, n));
		printf("CUSTOM   | %p\n", ft_memchr(s, c, n));
		printf("=== FINAL CHECK: unavailable\n\n");	
	}	

	{
		char s[] = "0123456789";
		int c = 'c';
		size_t n = strlen(s);
	
		puts("=== c ABSENT");
		printf("ORIGINAL | %p\n", memchr(s, c, n));
		printf("CUSTOM   | %p\n", ft_memchr(s, c, n));
		printf("=== FINAL CHECK: unavailable\n\n");	
	}

	{
		char s[] = "0123456789";
		int c = '\0';
		size_t n = strlen(s);
	
		puts("=== c == NUL");
		printf("ORIGINAL | %p\n", memchr(s, c, n));
		printf("CUSTOM   | %p\n", ft_memchr(s, c, n));
		printf("=== FINAL CHECK: unavailable\n");	
	}

	puts("\n================================= ft_memcmp.c\n");

	{
		char s1[] = "abcdef";
		char s2[] = "abcdef";
		size_t n = 3;

		puts("=== EQUAL STRINGS");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}
	
	{
		char s1[] = "abcdef";
		char s2[] = "abcxyz";
		size_t n = 3;

		puts("=== DIFFERENCE AFTER n");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}

	{
		char s1[] = "abcdef";
		char s2[] = "abcxyz";
		size_t n = 4;

		puts("=== DIFFERENCE BEFORE n");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}

	{
		char s1[] = "abcdef";
		char s2[] = "ABCDEF";
		size_t n = 3;

		puts("=== CASE SENSITIVE");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}

	{
		char s1[] = "abcdef";
		char s2[] = "abcdef";
		size_t n = 0;

		puts("=== SIZE == 0");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}

	{
		char s1[] = "abc";
		char s2[] = "abcdef";
		size_t n = 3;

		puts("=== s1 SHORTER");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}

	{
		char s1[] = "abcdef";
		char s2[] = "abc";
		size_t n = 3;

		puts("=== s2 SHORTER");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}
	
	{
		char s1[1024] = "";
		char s2[1024] = "";
		size_t n = 3;

		puts("=== BOTH EMPTY");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}
	
	{
		char s1[1024] = "";
		char s2[] = "abcdef";
		size_t n = 3;

		puts("=== s1 EMPTY");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}
	
	{
		char s1[] = "abcdef";
		char s2[1024] = "";
		size_t n = 3;

		puts("=== s2 EMPTY");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}
	
	{
		char s1[1024] = "abcdef";
		char s2[1024] = "abcdef";
		size_t n = 10;

		puts("=== SIZE > BOTH");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}
	
	{
		char s1[] = "ab";
		char s2[] = "abcdef";
		size_t n = 3;

		puts("=== SIZE > s1");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}
	
	{
		char s1[] = "abcdef";
		char s2[] = "ab";
		size_t n = 3;

		puts("=== SIZE > s2");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}
	
	puts("\n================================= ft_strnstr.c\n");

	{
	
	}

	puts("\n================================= ft_atoi.c\n");

	{
		char s[] = "-0123456789 0123456789";
		printf("TEST STR | %s\n", s);
		printf("ORIGINAL | %d\n", atoi(s));
		printf("CUSTOM   | %d\n", ft_atoi(s));
		printf("=== FINAL CHECK: %s\n",	(!!atoi(s) == !!ft_atoi(s)) ? "OK!" : "KO!");
	}

	return(0);
}
