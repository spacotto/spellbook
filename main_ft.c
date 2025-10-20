/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:49:20 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/20 15:20:27 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int	main()
{
	puts("\n================================= ft_substr.c\n");

	{
		char const *s = "0123456789 0123456789";
		unsigned int start = 4;
		size_t len = 3;

		puts("=== s len > start && len > ft_strlen(s + start)");
		printf("RESULT : %s\n\n", ft_substr(s, start, len));
	}
	
	{
		char const *s = "0123456789 0123456789";
		unsigned int start = 100;
		size_t len = 3;

		puts("=== start > s len");
		printf("RESULT : %s\n\n", ft_substr(s, start, len));
	}

	{
		char const *s = "0123456789 0123456789";
		unsigned int start = 3;
		size_t len = ft_strlen(s + start) + 10;

		puts("=== len > ft_strlen(s + start)");
		printf("RESULT : %s\n", ft_substr(s, start, len));
	}

	return(0);
}
