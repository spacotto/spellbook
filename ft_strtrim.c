/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:30:03 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/20 17:03:29 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	diff;
	
	diff = ft_strlen(s1) - ft_strlen(set) + 1;
	str = ft_calloc(diff, sizeof(char));
	while (*s1)
	{
		ft_strnstr(s1, set, ft_strlen(s1));	
	}
	return (NULL);
}
