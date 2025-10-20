/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:40:49 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/20 15:24:31 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = ft_calloc(len + 1, sizeof(char));
	if (s)
	{
		if (start > ft_strlen(s))
			return (ft_strdup(""));
		else
		{
			ft_memcpy(str, s + start, len);
			return (str);
		}
	}
	return (NULL);
}
