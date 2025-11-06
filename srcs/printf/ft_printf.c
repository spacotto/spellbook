/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:04:11 by spacotto          #+#    #+#             */
/*   Updated: 2025/11/06 22:21:47 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* PRINT %c*/
static void	ft_printchar(t_format *sformat)
{
	char	c;

	c = va_arg(sformat->args, int);
	ft_putchar_fd(c, 1);
	sformat->print_len++;
}

/* PRINT %s*/
static void	ft_printstr(t_format *sformat)
{
	char	*s;
	size_t	len;

	s = va_arg(sformat->args, char *);
	len = ft_strlen(s);
	ft_putstr_fd(s, 1);
	sformat->print_len += len;
}

/* CORE */
static void	ft_typefield(const char **format, t_format *sformat)
{
	if (**format == 'c')
		ft_printchar(sformat);
	else if (**format == 's')
		ft_printstr(sformat);	
/*	else if (**format == 'p')
		ft_printptr(args);	
	else if (**format == 'd' || c == 'i')
		ft_printnbr(args);	
	else if (**format == 'u')
		ft_printunb(args);	
	else if (**format == 'x' || c == 'X')
		ft_printhex(args);	
	else if (**format == '%')
		ft_printpercent(args);
*/	else
	{
		ft_putchar_fd(**format, 1);
		sformat->print_len++;
	}
	(*format)++;
}

int	ft_printf(const char *format, ...)
{
	t_format	f;

	f.print_len = 0;
	va_start(f.args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_typefield(&format, &f);
		}
		else
		{
			ft_putchar_fd(*format, 1);
			f.print_len++;
			format++;
		}
	}
	va_end(f.args);
	return (f.print_len);
}
