/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:33:22 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/21 17:49:50 by spacotto         ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	word;
	size_t	i;

	i = 0;
	word = 0;
	array = ft_calloc(ft_countwords(s, c), sizeof(char));
	if (*array)
	{
		while (*s)
		{
			if (*s == c)
				s++;
			else
			{
				word = 0;
				while (s[word] != '\0' && s[word] != c)
					word++;
				array[i] = ft_calloc(word + 1, sizeof(char));
				ft_memcpy(array[i], s, word);
				array[i][word] = '\0';
				i++;
				s += word;
			}
		}
		return (array);
	}
	return (NULL);
}
