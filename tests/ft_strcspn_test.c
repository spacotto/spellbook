/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:30:12 by spacotto          #+#    #+#             */
/*   Updated: 2026/01/07 16:47:24 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/printf.h"
	
static int total = 0;
static int passed = 0;

void	check(const char *s, const char *reject)
{
	total++;
	if(strcspn(s, reject) == ft_strcspn(s, reject))
	{
		passed++;
		ft_printf(CYAN "OK! %d / %d\n\n" RESET, passed, total);
	}
	else
		ft_printf(YELLOW "KO! %d / %d\n\n" RESET, passed, total);
}

int	main()
{
	ft_printf("================================= ft_strcspn.c\n\n");

	{
		const char s[1024] = "Homo quisque faber ipse fortunae sua";
		const char *reject = "Ho";
	
		ft_printf("=== Standard Case n.1\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", reject);
		ft_printf("Result   | %d\n", ft_strcspn(s, reject));
		ft_printf("Expected | %d\n", strcspn(s, reject));
		
		check (s, reject);
	}

	{
		const char s[1024] = "Homo quisque faber ipse fortunae sua";
		const char *reject = "fab";
	
		ft_printf("=== Standard Case n.2\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", reject);
		ft_printf("Result   | %d\n", ft_strcspn(s, reject));
		ft_printf("Expected | %d\n", strcspn(s, reject));
		
		check (s, reject);
	}

	{
		const char s[1024] = "Homo quisque faber ipse fortunae sua";
		const char *reject = "baf";
	
		ft_printf("=== Standard Case n.3\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", reject);
		ft_printf("Result   | %d\n", ft_strcspn(s, reject));
		ft_printf("Expected | %d\n", strcspn(s, reject));
		
		check (s, reject);
	}

	{
		const char s[1024] = "QWERT";
		const char *reject = "QWERT";
	
		ft_printf("=== Full Match n.1\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", reject);
		ft_printf("Result   | %d\n", ft_strcspn(s, reject));
		ft_printf("Expected | %d\n", strcspn(s, reject));
		
		check (s, reject);
	}

	{
		const char s[1024] = "QWERT";
		const char *reject = "TREWQ";
	
		ft_printf("=== Full Match n.2\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", reject);
		ft_printf("Result   | %d\n", ft_strcspn(s, reject));
		ft_printf("Expected | %d\n", strcspn(s, reject));
		
		check (s, reject);
	}

	{
		const char s[1024] = "QQWWEERRTT";
		const char *reject = "QWERT";
	
		ft_printf("=== Full Match n.3\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", reject);
		ft_printf("Result   | %d\n", ft_strcspn(s, reject));
		ft_printf("Expected | %d\n", strcspn(s, reject));
		
		check (s, reject);
	}

	{
		const char s[1024] = "";
		const char *reject = "";
	
		ft_printf("=== Empty s AND reject\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", reject);
		ft_printf("Result   | %d\n", ft_strcspn(s, reject));
		ft_printf("Expected | %d\n", strcspn(s, reject));
		
		check (s, reject);
	}

	{
		const char s[1024] = "";
		const char *reject = "Nam";
	
		ft_printf("=== Empty s\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", reject);
		ft_printf("Result   | %d\n", ft_strcspn(s, reject));
		ft_printf("Expected | %d\n", strcspn(s, reject));
		
		check (s, reject);
	}

	{
		const char s[1024] = "Nulli tacuisse nocet, nocet esse locutum.";
		const char *reject = "";
	
		ft_printf("=== Empty reject\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", reject);
		ft_printf("Result   | %d\n", ft_strcspn(s, reject));
		ft_printf("Expected | %d\n", strcspn(s, reject));
		
		check (s, reject);
	}

	{
		const char s[1024] = "Nulli tacuisse nocet, nocet esse locutum.";
		const char *reject = "\0oc";
	
		ft_printf("=== NULL Case n.1\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", reject);
		ft_printf("Result   | %d\n", ft_strcspn(s, reject));
		ft_printf("Expected | %d\n", strcspn(s, reject));
		
		check (s, reject);
	}

	{
		const char s[1024] = "Nul\0li tacuisse nocet, nocet esse locutum.";
		const char *reject = "noc";
	
		ft_printf("=== NULL Case n.2\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", reject);
		ft_printf("Result   | %d\n", ft_strcspn(s, reject));
		ft_printf("Expected | %d\n", strcspn(s, reject));
		
		check (s, reject);
	}

	return (0);
}
