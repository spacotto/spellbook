/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_buffer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:14:07 by spacotto          #+#    #+#             */
/*   Updated: 2025/11/26 18:44:52 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_itoa_base_buffer(ssize_t n, char *base, t_format *sformat)
{
	ssize_t	blen;
	size_t	len;
	size_t	flag;

	blen = ft_strlen(base);
	len = ft_countdigits(n, blen);
	flag = 0;
	if (n < 0)
	{
		sformat->buffer[0] = '-';
		n = -n;
		flag = 1;
	}
	if (n == 0)
		sformat->buffer[0] = '0';
	while (len > flag)
	{
		len--;
		sformat->buffer[len] = base[n % blen];
		n /= blen;
	}
}
