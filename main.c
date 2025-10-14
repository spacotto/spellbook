/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:08:53 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/14 10:44:33 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	{
		printf("ft_isalpha.c\n");
		printf("ORIGINAL | %d\nCUSTOM   | %d\n===\n", isalpha('A'), ft_isalpha('A'));
		printf("ORIGINAL | %d\nCUSTOM   | %d\n\n", isalpha(' '), ft_isalpha(' '));
	}
	
	{
		printf("ft_isdigit.c\n");
		printf("ORIGINAL | %d\nCUSTOM   | %d\n===\n", isdigit('3'), ft_isdigit('3'));
		printf("ORIGINAL | %d\nCUSTOM   | %d\n\n", isdigit('C'), ft_isdigit('C'));
	}
	return(0);
}
