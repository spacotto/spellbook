/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:28:54 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/20 16:15:44 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	total;

	total = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = ft_calloc(total, sizeof(char));
	if (s1 || s2)
	{
		ft_memcpy(str, s1, ft_strlen(s1));
		ft_memcpy(str + ft_strlen(s1), s2, ft_strlen(s2));
		return (str);
	}
	return (NULL);
}
