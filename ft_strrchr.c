/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:20:34 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/17 17:43:37 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
        int	i;
	
	i = ft_strlen(s);
	while (s[i] != '\0' && s[i] > 0)
        {
                if (i == c)
		{       	
			s += i;
                        return ((char *)s[i]);
		}
		i--;
        }
        return (NULL);
}
