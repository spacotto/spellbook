/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 15:08:29 by spacotto          #+#    #+#             */
/*   Updated: 2026/01/07 16:19:50 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/printf.h"
	
static int total = 0;
static int passed = 0;

void	check(const char *s, const char *accept)
{
	total++;
	if(strspn(s, accept) == ft_strspn(s, accept))
	{
		passed++;
		ft_printf(CYAN "OK! %d / %d\n\n" RESET, passed, total);
	}
	else
		ft_printf(YELLOW "KO! %d / %d\n\n" RESET, passed, total);
}

int	main()
{
	ft_printf("================================= ft_strspn.c\n\n");

	{
		const char s[1024] = "Homo quisque faber ipse fortunae sua";
		const char *accept = "Ho";
	
		ft_printf("=== Standard Case n.1\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", accept);
		ft_printf("Result   | %d\n", ft_strspn(s, accept));
		ft_printf("Expected | %d\n", strspn(s, accept));
		
		check (s, accept);
	}

	{
		const char s[1024] = "Homo quisque faber ipse fortunae sua";
		const char *accept = "moH";
	
		ft_printf("=== Standard Case n.2\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", accept);
		ft_printf("Result   | %d\n", ft_strspn(s, accept));
		ft_printf("Expected | %d\n", strspn(s, accept));
		
		check (s, accept);
	}

	{
		const char s[1024] = "Homo quisque faber ipse fortunae sua";
		const char *accept = "fab";
	
		ft_printf("=== Standard Case n.3\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", accept);
		ft_printf("Result   | %d\n", ft_strspn(s, accept));
		ft_printf("Expected | %d\n", strspn(s, accept));
		
		check (s, accept);
	}

	{
		const char s[1024] = "QWERT";
		const char *accept = "QWERT";
	
		ft_printf("=== Full Match n.1\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", accept);
		ft_printf("Result   | %d\n", ft_strspn(s, accept));
		ft_printf("Expected | %d\n", strspn(s, accept));
		
		check (s, accept);
	}

	{
		const char s[1024] = "QWERT";
		const char *accept = "TREWQ";
	
		ft_printf("=== Full Match n.2\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", accept);
		ft_printf("Result   | %d\n", ft_strspn(s, accept));
		ft_printf("Expected | %d\n", strspn(s, accept));
		
		check (s, accept);
	}

	{
		const char s[1024] = "QQWWEERRTT";
		const char *accept = "QWERT";
	
		ft_printf("=== Full Match n.3\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", accept);
		ft_printf("Result   | %d\n", ft_strspn(s, accept));
		ft_printf("Expected | %d\n", strspn(s, accept));
		
		check (s, accept);
	}

	{
		const char s[1024] = "";
		const char *accept = "";
	
		ft_printf("=== Empty s AND accept\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", accept);
		ft_printf("Result   | %d\n", ft_strspn(s, accept));
		ft_printf("Expected | %d\n", strspn(s, accept));
		
		check (s, accept);
	}

	{
		const char s[1024] = "";
		const char *accept = "Nam";
	
		ft_printf("=== Empty s\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", accept);
		ft_printf("Result   | %d\n", ft_strspn(s, accept));
		ft_printf("Expected | %d\n", strspn(s, accept));
		
		check (s, accept);
	}

	{
		const char s[1024] = "Nulli tacuisse nocet, nocet esse locutum.";
		const char *accept = "";
	
		ft_printf("=== Empty accept\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", accept);
		ft_printf("Result   | %d\n", ft_strspn(s, accept));
		ft_printf("Expected | %d\n", strspn(s, accept));
		
		check (s, accept);
	}

	{
		const char s[1024] = "Nulli tacuisse nocet, nocet esse locutum.";
		const char *accept = "Nul\0l";
	
		ft_printf("=== NULL Case n.1\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", accept);
		ft_printf("Result   | %d\n", ft_strspn(s, accept));
		ft_printf("Expected | %d\n", strspn(s, accept));
		
		check (s, accept);
	}

	{
		const char s[1024] = "N\0ulli tacuisse nocet, nocet esse locutum.";
		const char *accept = "Nu";
	
		ft_printf("=== Empty accept\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", accept);
		ft_printf("Result   | %d\n", ft_strspn(s, accept));
		ft_printf("Expected | %d\n", strspn(s, accept));
		
		check (s, accept);
	}

	return (0);
}
