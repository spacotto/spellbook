/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:38:16 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/16 17:24:00 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	len = src_len + dst_len;
	i = 0;
	if (size <= dst_len)
		return (src_len + size);
	while (src[i] != '\0' && i < size - dst_len - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (len);
}
