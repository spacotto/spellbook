/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:30:03 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/22 14:34:54 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	char	*start;
	char	*end;
	t_trim	t;

	start = (char *)s1;
	end = (char *)s1 + ft_strlen(s1) - 1;
	t.setlen = ft_strlen(set);
	t.i = ft_strlen(s1) - t.setlen;
	trim = ft_calloc(ft_strlen(s1), sizeof(char));
	if (!trim)
		return (NULL);
	if (!*s1)
		return (ft_strdup(""));
	else
	{
		if (*start && ft_strncmp(s1, set, t.setlen) == 0)
			start += t.setlen;
		if (end > start && *end && ft_strncmp(&s1[t.i], set, t.setlen) == 0)
			end -= t.setlen;
		t.trimlen = (end - start) + 1;
		ft_memcpy(trim, start, t.trimlen);
		trim[t.trimlen] = '\0';
	}
	return (trim);
}
