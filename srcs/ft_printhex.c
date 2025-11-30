/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:19:19 by spacotto          #+#    #+#             */
/*   Updated: 2025/11/30 23:26:23 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printhex_lower(t_format *sformat)
{
	size_t		hex;
	char		*s;
	size_t		len;
	t_buffer	b;

	hex = (size_t)va_arg(sformat->args, unsigned int);
	ft_utoa_base_buffer(hex, "0123456789abcdef", &b);
	s = b.buffer;
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	sformat->print_len += len;
}

void	ft_printhex_upper(t_format *sformat)
{
	size_t		hex;
	char		*s;
	size_t		len;
	t_buffer	b;

	hex = (size_t)va_arg(sformat->args, unsigned int);
	ft_utoa_base_buffer(hex, "0123456789ABCDEF", &b);
	s = b.buffer;
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	sformat->print_len += len;
}
