/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:18:41 by spacotto          #+#    #+#             */
/*   Updated: 2025/11/26 18:33:56 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(ssize_t n, char *base)
{
	size_t	base_len;

	len = ft_strlen(base);
	base_len = ft_countdigits(n, base_len);
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 0)
	{
		ft_putnbr(n / base_len);
		ft_putnbr(n % base_len);
	}
	else
		ft_putchar(n + '0');
}
