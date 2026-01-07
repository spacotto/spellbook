/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 15:08:29 by spacotto          #+#    #+#             */
/*   Updated: 2026/01/07 15:12:30 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/printf.h"
	
static int total = 0;
static int passed = 0;

void	check(const char *s, const char *accept)
{
	total++;
	if ((strspn(s, accept) == NULL && ft_strspn(s, accept) == NULL) ||
		(strcmp(strspn(s, accept), ft_strpbrk(s, accept)) == 0))
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
		const char *accept = "exj";
	
		ft_printf("=== Character found in the middle\n");
		ft_printf("String   | %s\n", s);
		ft_printf("Accept   | %s\n", accept);
		ft_printf("Found    | %s\n", ft_strspn(s, accept));
		ft_printf("Expected | %s\n", strspn(s, accept));
		
		check (s, accept);
	}

	return (0);
}
