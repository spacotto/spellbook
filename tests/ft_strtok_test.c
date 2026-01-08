/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 16:43:14 by spacotto          #+#    #+#             */
/*   Updated: 2026/01/08 13:32:03 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/printf.h"

void	check(char *token1, const char *token2)
{
	if ((token1 == NULL && token2 == NULL) || (strcmp(token1, token2) == 0))
		ft_printf(CYAN "OK!\n\n" RESET);
	else
		ft_printf(YELLOW "KO!\n\n" RESET);
}

int	main()
{
	ft_printf("================================= ft_strtok.c\n\n");

	{
		char s1[] = "Homo quisque_faber//ipse*fortunae _/*sua";
		char s2[] = "Homo quisque_faber//ipse*fortunae _/*sua";
		const char *delim = " _/*";
		 	
		ft_printf("====== Standard Case n.1\n");
		ft_printf("Str: %s\n", s1);
		ft_printf("Div: %s\n\n", delim);
		
		int i = 1;
		char *token1 = strtok(s1, delim);
		char *token2 = ft_strtok(s2, delim);
		ft_printf("Fn call %i\n", i);
		ft_printf("Expected | %s\n", token1);
		ft_printf("Result   | %s\n", token2);
		check(token1, token2); 

		while (token1 != NULL)
		{
			i++;
			ft_printf("Fn call %i\n", i);
			token1 = strtok(NULL, delim);
			ft_printf("Expected | %s\n", token1);
			token2 = ft_strtok(NULL, delim);
			ft_printf("Result   | %s\n", token2);
			check(token1, token2); 
		}
	}

	{
		char s1[] = "0 1 2 3 4 5 6 7 9 ";
		char s2[] = "0 1 2 3 4 5 6 7 9 ";
		const char *delim = " ";
		 	
		ft_printf("====== Standard Case n.2\n");
		ft_printf("Str: %s\n", s1);
		ft_printf("Div: %s\n\n", delim);
		
		int i = 1;
		char *token1 = strtok(s1, delim);
		char *token2 = ft_strtok(s2, delim);
		ft_printf("Fn call %i\n", i);
		ft_printf("Expected | %s\n", token1);
		ft_printf("Result   | %s\n", token2);
		check(token1, token2); 

		while (token1 != NULL)
		{
			i++;
			ft_printf("Fn call %i\n", i);
			token1 = strtok(NULL, delim);
			ft_printf("Expected | %s\n", token1);
			token2 = ft_strtok(NULL, delim);
			ft_printf("Result   | %s\n", token2);
			check(token1, token2); 
		}
	}

	{
		char s1[] = "";
		char s2[] = "";
		const char *delim = " ";
		 	
		ft_printf("====== Empty str\n");
		ft_printf("Str: %s\n", s1);
		ft_printf("Div: %s\n\n", delim);
		
		int i = 1;
		char *token1 = strtok(s1, delim);
		char *token2 = ft_strtok(s2, delim);
		ft_printf("Fn call %i\n", i);
		ft_printf("Expected | %s\n", token1);
		ft_printf("Result   | %s\n", token2);
		check(token1, token2); 

		while (token1 != NULL)
		{
			i++;
			ft_printf("Fn call %i\n", i);
			token1 = strtok(NULL, delim);
			ft_printf("Expected | %s\n", token1);
			token2 = ft_strtok(NULL, delim);
			ft_printf("Result   | %s\n", token2);
			check(token1, token2); 
		}
	}

	{
		char s1[] = "Homo quisque faber ipse fortunae sua";
		char s2[] = "Homo quisque faber ipse fortunae sua";
		const char *delim = "";
		 	
		ft_printf("====== Empty delimiter\n");
		ft_printf("Str: %s\n", s1);
		ft_printf("Div: %s\n\n", delim);
		
		int i = 1;
		char *token1 = strtok(s1, delim);
		char *token2 = ft_strtok(s2, delim);
		ft_printf("Fn call %i\n", i);
		ft_printf("Expected | %s\n", token1);
		ft_printf("Result   | %s\n", token2);
		check(token1, token2); 

		while (token1 != NULL)
		{
			i++;
			ft_printf("Fn call %i\n", i);
			token1 = strtok(NULL, delim);
			ft_printf("Expected | %s\n", token1);
			token2 = ft_strtok(NULL, delim);
			ft_printf("Result   | %s\n", token2);
			check(token1, token2); 
		}
	}

	{
		char s1[] = "";
		char s2[] = "";
		const char *delim = "";
		 	
		ft_printf("====== Empty parameters\n");
		ft_printf("Str: %s\n", s1);
		ft_printf("Div: %s\n\n", delim);
		
		int i = 1;
		char *token1 = strtok(s1, delim);
		char *token2 = ft_strtok(s2, delim);
		ft_printf("Fn call %i\n", i);
		ft_printf("Expected | %s\n", token1);
		ft_printf("Result   | %s\n", token2);
		check(token1, token2); 

		while (token1 != NULL)
		{
			i++;
			ft_printf("Fn call %i\n", i);
			token1 = strtok(NULL, delim);
			ft_printf("Expected | %s\n", token1);
			token2 = ft_strtok(NULL, delim);
			ft_printf("Result   | %s\n", token2);
			check(token1, token2); 
		}
	}

	{
		char *s1 = NULL;
		char *s2 = NULL;
		const char *delim = "***";
		 	
		ft_printf("====== NULL str\n");
		ft_printf("Str: %s\n", s1);
		ft_printf("Div: %s\n\n", delim);
		
		int i = 1;
		char *token1 = strtok(s1, delim);
		char *token2 = ft_strtok(s2, delim);
		ft_printf("Fn call %i\n", i);
		ft_printf("Expected | %s\n", token1);
		ft_printf("Result   | %s\n", token2);
		check(token1, token2); 

		while (token1 != NULL)
		{
			i++;
			ft_printf("Fn call %i\n", i);
			token1 = strtok(NULL, delim);
			ft_printf("Expected | %s\n", token1);
			token2 = ft_strtok(NULL, delim);
			ft_printf("Result   | %s\n", token2);
			check(token1, token2); 
		}
	}
/*
	{
		char s1[] = "Homo quisque faber ipse fortunae sua";
		char s2[] = "Homo quisque faber ipse fortunae sua";
		const char *delim = NULL;
		 	
		ft_printf("====== NULL delimiter\n");
		ft_printf("Str: %s\n", s1);
		ft_printf("Div: %s\n\n", delim);
		
		int i = 1;
		char *token1 = strtok(s1, delim);
		char *token2 = ft_strtok(s2, delim);
		ft_printf("Fn call %i\n", i);
		ft_printf("Expected | %s\n", token1);
		ft_printf("Result   | %s\n", token2);
		check(token1, token2); 

		while (token1 != NULL)
		{
			i++;
			ft_printf("Fn call %i\n", i);
			token1 = strtok(NULL, delim);
			ft_printf("Expected | %s\n", token1);
			token2 = ft_strtok(NULL, delim);
			ft_printf("Result   | %s\n", token2);
			check(token1, token2); 
		}
	}
*/
	{
		char *s1 = NULL;
		char *s2 = NULL;
		const char *delim = NULL;
		 	
		ft_printf("====== NULL parameters\n");
		ft_printf("Str: %s\n", s1);
		ft_printf("Div: %s\n\n", delim);
		
		int i = 1;
		char *token1 = strtok(s1, delim);
		char *token2 = ft_strtok(s2, delim);
		ft_printf("Fn call %i\n", i);
		ft_printf("Expected | %s\n", token1);
		ft_printf("Result   | %s\n", token2);
		check(token1, token2); 

		while (token1 != NULL)
		{
			i++;
			ft_printf("Fn call %i\n", i);
			token1 = strtok(NULL, delim);
			ft_printf("Expected | %s\n", token1);
			token2 = ft_strtok(NULL, delim);
			ft_printf("Result   | %s\n", token2);
			check(token1, token2); 
		}
	}

	return (0);
}
