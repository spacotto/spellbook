/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:57:46 by spacotto          #+#    #+#             */
/*   Updated: 2025/11/05 12:01:03 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef FT_PRINTF_H
# define FT_PRINTF_H

/* INCLUDES */
# include "libft.h"

# include <stdarg.h>

/* STRUCTURES */

typedef struct s_args
{
	va_list	args;
	size_t	print_len;
}	t_args;

/* PROTOTYPES : CORE */

int	ft_printf(const char *format, ...);

/* PROTOTYPES : TYPE FIELD */

void	ft_typefield(const char **format, t_ args *args);
void    ft_printchar(char c);

#endif
