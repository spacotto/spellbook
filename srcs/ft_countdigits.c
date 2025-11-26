/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdigits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:34:19 by spacotto          #+#    #+#             */
/*   Updated: 2025/11/26 18:38:16 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countdigits(ssize_t n, ssize_t len)
{
	size_t	counter;

	counter = 1;
	if (n < 0)
	{
		counter++;
		n = -n;
	}
	while (n >= len)
	{
		n /= len;
		counter++;
	}
	return (counter);
}
