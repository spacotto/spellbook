# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/14 09:34:48 by spacotto          #+#    #+#              #
#    Updated: 2025/10/25 19:40:17 by spacotto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a
CC	:= cc
FLAGS	:= -c -Wall -Wextra -Werror

# INCLUDES
INC	:= -I .

# SOURCES
SRC_ISC	:= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c

SRC_STR	:= ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
			ft_strncmp.c ft_strnstr.c

SRC_MEM	:= ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c \
			ft_memcmp.c

SRC_CNV	:= ft_toupper.c ft_tolower.c ft_atoi.c

SRC_MLC	:= ft_calloc.c ft_strdup.c

SRC_FT	:= ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c 

SRC_FN	:= ft_strmapi.c ft_striteri.c

SRC_FD	:= ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS	:= $(SRC_ISC) $(SRC_STR) $(SRC_MEM) $(SRC_CNV) $(SRC_MLC) \
		$(SRC_FT) $(SRC_FN) $(SRC_FD)

SRCS_B	:= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# OBJECTS
OBJS	:= $(SRCS:.c=.o)

OBJS_B	:= $(SRCS_B: .c=.o)

# RULES
all: $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o : %.c
	$(CC) $(FLAGS) $(INC) $< -o $@

clean:
	/bin/rm -rf $(OBJS) 

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

bonus: $(NAME) $(OBJS_B) 
	ar rc $(NAME) $(OBJS_S)
	ranlib $(NAME)

.PHONY: all, clean, fclean, re, bonus
