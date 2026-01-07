/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 13:36:28 by spacotto          #+#    #+#             */
/*   Updated: 2026/01/07 18:29:51 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok(char *str, const char *delim)
{
	static	char	*token = NULL;

	if (!token && str)
		token = str + ft_strcspn(str, delim);
	else
		token += ft_strcspn(token, delim);
	return (token);
}
