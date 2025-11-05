/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:04:11 by spacotto          #+#    #+#             */
/*   Updated: 2025/11/05 15:09:14 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

/* PRINT %c*/
void	ft_printchar(char c)
{
	ft_putchar_fd(c, 1);
}

/* CORE */
void	ft_typefield(const char **format, t_args *args)
{
	char c = **format;
	
	if (c == 'c')
		ft_printchar(args);	
/*	else if (c == 's')
		ft_printstr(args);	
	else if (c == 'p')
		ft_printptr(args);	
	else if (c == 'd' || c == 'i')
		ft_printnbr(args);	
	else if (c == 'u')
		ft_printunb(args);	
	else if (c == 'x' || c == 'X')
		ft_printhex(args);	
	else if (c == '%')
		ft_printpercent(args);
*/	else
	{
		ft_putchar_fd(c, 1);
		args->print_len++;
	}
	(*format)++;
}

int	ft_printf(const char *format, ...)
{
	t_args	t;

	t.print_len = 0;
	va_start(t.args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_typefield(&format, &t.args);
		}
		else
		{
			ft_putchar_fd(*format, 1);
			t.print_len++;
			format++;
		}	
	}	
	va_end(t.args);
	return(t.print_len);
}
