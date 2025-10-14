/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:08:53 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/14 15:15:06 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	{
		printf("=== ft_isalpha.c ===\n");
		printf("ORIGINAL: %d | CUSTOM: %d\n", isalpha('A'), ft_isalpha('A'));
		printf("ORIGINAL: %d | CUSTOM: %d\n\n", isalpha(' '), ft_isalpha(' '));
	}
	
	{
		printf("=== ft_isdigit.c ===\n");
		printf("ORIGINAL: %d | CUSTOM: %d\n", isdigit('3'), ft_isdigit('3'));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isdigit('C'), ft_isdigit('C'));
	}

	{
		printf("=== ft_isalnum.c ===\n");
		printf("ORIGINAL: %d | CUSTOM: %d\n", isalnum('3'), ft_isalnum('3'));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isalnum('c'), ft_isalnum('c'));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isalnum(' '), ft_isalnum(' '));
	}

	{
                printf("=== ft_isascii.c ===\n");
                printf("ORIGINAL: %d | CUSTOM: %d\n", isascii(0), ft_isascii(0));
                printf("ORIGINAL: %d | CUSTOM: %d\n", isascii(127), ft_isascii(127));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isascii(128), ft_isascii(128));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isascii(-1), ft_isascii(-1));
        }

	{
                printf("=== ft_isprint.c ===\n");
                printf("ORIGINAL: %d | CUSTOM: %d\n", isprint(32), ft_isprint(32));
                printf("ORIGINAL: %d | CUSTOM: %d\n", isprint(33), ft_isprint(33));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isprint(126), ft_isprint(126));
		printf("ORIGINAL: %d | CUSTOM: %d\n", isprint(127), ft_isprint(127));
        }

	{
		char *s = "";
		printf("=== ft_strlen.c ===\n");
		printf("ORIGINAL: %lu | CUSTOM: %zu\n", strlen(s), ft_strlen(s));
	}

	return(0);
}
