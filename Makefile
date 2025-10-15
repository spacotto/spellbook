# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/14 09:34:48 by spacotto          #+#    #+#              #
#    Updated: 2025/10/15 17:14:34 by spacotto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a
CC	:= cc
FLAGS	:= -Wall -Wextra -Werror

# SOURCES
SRC_ISC	:= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c

SRC_STR	:= ft_strlen.c

SRC_MEM	:= ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c

SRCS	:= $(SRC_ISC) $(SRC_STR) $(SRC_MEM)

# OBJECTS
OBJS	:= $(SRCS:.c=.o)

# RULES
all: $(NAME)

$(NAME) : $(OBJS)
	ar -rsc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o : %.c
	$(CC) -c $(FLAGS) -I . $< -o $@

clean:
	/bin/rm -rf $(OBJS) 

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
