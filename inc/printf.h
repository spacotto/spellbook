/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:57:46 by spacotto          #+#    #+#             */
/*   Updated: 2025/11/07 14:39:14 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

/* INCLUDES */
# include <stdarg.h>

/* STRUCTURES */

typedef struct s_format
{
	va_list	args;
	size_t	print_len;
}	t_format;

/* PROTOTYPES : CORE */

int	ft_printf(const char *format, ...);

/* PROTOTYPES : TYPE FIELD */

void	ft_typefield(const char **format, t_format *sformat);
void	ft_printchar(t_format *sformat);
void	ft_printstr(t_format *sformat);
void	ft_printptr(t_format *sformat);
void	ft_printnbr(t_format *sformat);

#endif
