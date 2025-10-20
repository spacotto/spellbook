/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:07:08 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/20 10:14:26 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	i;

	i = 0;
	d = malloc (sizeof(char) * (ft_strlen(s)));
	if (*s)
		ft_memcpy(d, s, ft_strlen(s));
	return (d);
}
