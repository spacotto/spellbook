/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:36:48 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/23 15:45:51 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigits(size_t n)
{
	size_t	counter;

	counter = 0;
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

static char	*ft_conversion(int n)
{
	t_itoa	t;
	size_t	nba;

	nba = n;
	t.len = ft_countdigits(n) + 1;
	t.number = calloc(t.len + 1, sizeof(char));
	if (n < 0)
		nba = -n;
	if (nba > 9)
		t.number = ft_strcat(ft_conversion(n / 10), ft_conversion(n % 10));
	else
		t.number[0] = nba + '0';
	t.number[t.len] = '\0';
	return (t.number);
}

char	*ft_itoa(int n)
{
	t_itoa	t;

	t.len = ft_countdigits(n) + 1;
	if (!t.result)
		return (NULL);
	if (n < 0)
	{
		t.result = calloc(t.len + 2, sizeof(char));
		t.sign = ft_strdup("-");	
		t.result = ft_strcat(t.sign, ft_conversion(n));
	}
	else
	{
		t.result = calloc(t.len + 1, sizeof(char));
		t.result = ft_conversion(n);
	}
	return (t.result);
}
