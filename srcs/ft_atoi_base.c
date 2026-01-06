/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:35:10 by spacotto          #+#    #+#             */
/*   Updated: 2026/01/06 16:04:51 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_base(const char *nptr, int base)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(nptr[i]) == 1)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i])
	{
        result *= base;
		if (nptr[i] >= '0' && nptr[i] <= 9)
			result += nptr[i] - '0';
		else if (nptr[i] >= 'a' && nptr[i] <= 'f')
			result += nptr[i] - 'a' + 10;
		else if (nptr[i] >= 'A' && nptr[i] <= 'F')
			result += nptr[i] - 'A' + 10;
		i++;
	}
	return (result * sign);
}
