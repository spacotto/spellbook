/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_and_replace_test.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 15:03:51 by spacotto          #+#    #+#             */
/*   Updated: 2026/01/01 16:33:42 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/libft.h"

int	main(int ac, char **av)
{
	char	*s;

	ft_putendl_fd("\n================================= ft_search_and_replace.c\n", 1);
	if (ac == 4 && ft_strlen(av[2]) == 1 && ft_strlen(av[3]) == 1)
	{
		s = ft_search_and_replace(av[1], av[2][0], av[3][0]);
		ft_putstr_fd(s, 0);
	}
	write(1, "\n", 1);
	return (0);
}
