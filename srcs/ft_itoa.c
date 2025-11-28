/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:36:48 by spacotto          #+#    #+#             */
/*   Updated: 2025/11/28 10:14:17 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	t_itoa	t;

	t.nb = n;
	t.base_len = ft_strlen("0123456789");
	t.len = ft_countdigits(n, t.base_len);
	t.result = ft_calloc(t.len + 1, sizeof(char));
	if (!t.result)
		return (NULL);
	if (t.nb < 0)
	{
		t.result[0] = '-';
		t.nb = -t.nb;
	}
	if (t.nb == 0)
		t.result[0] = '0';
	while (t.nb > 0)
	{
		t.len--;
		t.result[t.len] = (t.nb % 10) + '0';
		t.nb /= 10;
	}
	return (t.result);
}
