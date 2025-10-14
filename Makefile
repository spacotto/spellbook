# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/14 09:34:48 by spacotto          #+#    #+#              #
#    Updated: 2025/10/14 10:29:40 by spacotto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a
CC	:= cc
FLAGS	:= -Wall -Wextra -Werror

# INCLUDES
INC	:= libft.h

# SOURCES
SRC_ISC	:= ft_isalpha.c ft_isdigit.c

SRCS	:= $(SRC_ISC)

# OBJECTS
OBJS	:= $(SRCS:.c=.o)

# RULES
all: $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJS) : $(SRCS)
	$(CC) -c $(FLAGS) -I $(INC) $< -o $@

clean:
	/bin/rm -rf $(OBJS) 

fclean:
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
