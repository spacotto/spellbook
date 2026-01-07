/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 12:31:55 by spacotto          #+#    #+#             */
/*   Updated: 2026/01/07 14:49:05 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/printf.h"

static int total = 0;
static int passed = 0;

void	check(const char *s, const char *accept)
{
	total++;
	if ((strpbrk(s, accept) == NULL && ft_strpbrk(s, accept) == NULL) ||
		(strcmp(strpbrk(s, accept), ft_strpbrk(s, accept)) == 0))
	{
		passed++;
		ft_printf(CYAN "OK! %d / %d\n\n" RESET, passed, total);
	}
	else
		ft_printf(YELLOW "KO! %d / %d\n\n" RESET, passed, total);
}

int	main()
{
	ft_printf("================================= ft_strpbrk.c\n\n");

	{
		const char s[1024] = "Homo quisque faber ipse fortunae sua";
		const char *accept = "exj";
	
		ft_printf("=== Character found in the middle\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", accept);
		ft_printf("Found    | %s\n", ft_strpbrk(s, accept));
		ft_printf("Expected | %s\n", strpbrk(s, accept));
		
		check (s, accept);
	}

	{
		const char s[1024] = "Mala tempora currunt, sed peiora parantur";
		const char *accept = "123456789";
	
		ft_printf("=== No matching character found\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", accept);
		ft_printf("Found    | %s\n", ft_strpbrk(s, accept));
		ft_printf("Expected | %s\n", strpbrk(s, accept));
		
		check (s, accept);
	}

	{
		const char s[1024] = "Nulli tacuisse nocet, nocet esse locutum.";
		const char *accept = "Nam";
	
		ft_printf("=== Matching character is the first character of s AND accept\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", accept);
		ft_printf("Found    | %s\n", ft_strpbrk(s, accept));
		ft_printf("Expected | %s\n", strpbrk(s, accept));
		
		check (s, accept);
	}

	{
		const char s[1024] = "Non exiguum temporis habemus, sed multum perdidimus.";
		const char *accept = "abcdeN";
	
		ft_printf("=== Matching character is the first characteri of s and the last of accept\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", accept);
		ft_printf("Found    | %s\n", ft_strpbrk(s, accept));
		ft_printf("Expected | %s\n", strpbrk(s, accept));
		
		check (s, accept);
	}

	return (0);
}
