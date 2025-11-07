/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:02:57 by spacotto          #+#    #+#             */
/*   Updated: 2025/11/07 12:03:54 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_printstr(t_format *sformat)
{
    char    *s;
    size_t  len;

    s = va_arg(sformat->args, char *);
    len = ft_strlen(s);
    ft_putstr_fd(s, 1);
    sformat->print_len += len;
}
