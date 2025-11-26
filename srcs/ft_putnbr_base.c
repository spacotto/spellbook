/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:18:41 by spacotto          #+#    #+#             */
/*   Updated: 2025/11/26 18:52:05 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(ssize_t n, char *base)
{
	size_t	base_len;

	base_len = ft_strlen(base);
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 0)
	{
		ft_putnbr_base(n / base_len, base);
		ft_putnbr_base(n % base_len, base);
	}
	else
		ft_putchar(n + '0');
}
