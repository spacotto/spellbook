/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 16:43:14 by spacotto          #+#    #+#             */
/*   Updated: 2026/01/05 16:59:04 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/libft.h"
#include "./inc/printf.h"

int	main(int ac, char **av)
{
	(void)ac;
	
	ft_putendl_fd("\n================================= ft_strtok.c\n", 1);
	ft_printf("1st call: %s\n", ft_strtok(av[1], &av[2][0]));
	ft_printf("2nd call: %s\n", ft_strtok(av[1], &av[2][0]));
	ft_printf("3rd call: %s\n", ft_strtok(av[1], &av[2][0]));
	return (0);
}
