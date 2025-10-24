/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:36:48 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/24 18:02:54 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigits(ssize_t n)
{
	size_t	counter;

	counter = 0;
	if (n < 0)
	{
		counter++;
		n = -n;
	}
	if (n == 0)
		counter++;
	while (n > 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

static char	*ft_strcat(char *dst, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dst);
	while (src[i] != '\0')
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[i + j] = '\0';
	return (dst);
}

char	*ft_itoa(int n)
{
	t_itoa	t;
	
	t.i = 0;
	t.nba = n;
	t.len = ft_countdigits(n) + 1;
	t.result = ft_calloc(t.len, sizeof(char));
	if (!t.result)
		return (NULL);
	if (n < 0)
	{
		t.result[t.i] = '-';
		t.i++;
	}
	if (t.nba > 9)
		t.result = ft_strcat(ft_itoa(n / (10 * (1 - 2 * (n < 0)))), ft_itoa((n % 10) * (1 - 2 * (n < 0))));
	else
	{
		t.result[t.i] = t.nba + '0';
			t.i++;
		t.result[t.len] = '\0';
	}
	return (t.result);
}
