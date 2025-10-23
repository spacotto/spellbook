/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:33:22 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/22 10:55:49 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	size_t	i;	
	size_t	counter;

	i = 0;
	if (s[i] != c)
		counter = 1;
	else
		counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != '\0')
			counter++;
		i++;
	}
	return (counter);
}

static char	*ft_fill(char *array, size_t *irow, char const *s, char c)
{
	while (s[*irow] != '\0' && s[*irow] != c)
		*irow = *irow + 1;
	array = ft_calloc(*irow * 4 + 1, sizeof(char));
	ft_memcpy(array, s, *irow);
	array[*irow] = '\0';
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	icol;
	size_t	irow;

	icol = 0;
	array = ft_calloc(ft_countwords(s, c), sizeof(char *));
	if (!array)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			irow = 0;
			array[icol] = ft_fill(array[icol], &irow, s, c);
			icol++;
			s += irow;
		}
	}
	array[icol] = NULL;
	return (array);
}
