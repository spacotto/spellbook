/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 16:43:14 by spacotto          #+#    #+#             */
/*   Updated: 2026/01/07 18:26:33 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/printf.h"

static int total = 0;
static int passed = 0;

void	check(char *str, const char *delim)
{
	total++;
	if ((strtok(str, delim) == NULL && ft_strtok(str, delim) == NULL) ||
		(strcmp(strtok(str, delim), ft_strtok(str, delim)) == 0))
	{
		passed++;
		ft_printf(CYAN "OK! %d / %d\n\n" RESET, passed, total);
	}
	else
		ft_printf(YELLOW "KO! %d / %d\n\n" RESET, passed, total);
}

int	main()
{
	ft_printf("================================= ft_strtok.c\n\n");

	{
		char s[1024] = "Homo_quisque_faber_ipse_fortunae_sua";
		const char *delim = "_";
		int i = 1;
	
		ft_printf("=== Standard Case n.1\n");
		ft_printf("Str: %s\n", s);
		ft_printf("Div: %s\n\n", delim);
		
		ft_printf("%i. Expected	| %s\n", i, strtok(s, delim));
		ft_printf("%i. Result	| %s\n", i, strtok(s, delim));
		check(s, delim);
		
		while (i < 7)
		{
			i++;
			ft_printf("%i. Expected	| %s\n", i, strtok(NULL, delim));
			ft_printf("%i. Result	| %s\n", i, ft_strtok(NULL, delim));
			check(NULL, delim);
		}
	}

	return (0);
}
