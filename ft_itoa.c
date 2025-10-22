/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:36:48 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/22 17:52:46 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigits(size_t n)
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

static char	*ft_conversion(int n)
{	
	t_itoa	t;
	size_t	nba;

	nba = n;
	t.len = ft_countdigits(n) + 1;
	t.number = calloc(t.len + 1, sizeof(char));
	if (n < 0)
	{
		nba = -n;
	}
	if (nba > 9)
	{
		t.number = ft_strjoin(ft_conversion(n / 10), ft_conversion(n % 10));
	}
	else
	{
		t.number[0] = nba + '0';
		t.number[1] = '\0';
	}
	return (t.number);
}

char	*ft_itoa(int n)
{
	t_itoa	t;

	t.len = ft_countdigits(n) + 1;
	t.result = calloc(t.len + 1, sizeof(char));
	if (!t.result)
		return (NULL);
	t.sign = ft_strdup("");
	if (n < 0)
		t.sign = ft_strdup("-");
	t.number = ft_conversion(n);
	t.result = ft_strjoin(t.sign, t.number);
	return (t.result);
}
