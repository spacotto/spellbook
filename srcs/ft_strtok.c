/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 13:36:28 by spacotto          #+#    #+#             */
/*   Updated: 2026/01/08 12:51:47 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok(char *str, const char *delim)
{
	static char	*str_cpy;

	if (str)
    	str_cpy = str;
  	if (!str_cpy)
    	return (NULL);
	while (*str_cpy && ft_strchr(delim, *str_cpy))
    	str_cpy++;
	if (!*str_cpy)
	{
		str_cpy = NULL;
		return (NULL);
	}
	str = str_cpy;
	while (*str_cpy && !ft_strchr(delim, *str_cpy))
		str_cpy++;
	if (*str_cpy)
	{
		*str_cpy = '\0';
		str_cpy++;
	}
	else
		str_cpy = NULL;
	return (str);
}
