# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/01 13:30:48 by spacotto          #+#    #+#              #
#    Updated: 2025/11/13 17:55:51 by spacotto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libft.a
CC			:= cc
FLAGS		:= -c -Wall -Wextra -Werror

# ============================================================================
# COLORS
# ============================================================================

RESET		:= \033[0m
GRAY		:= \033[0;90m
RED			:= \033[0;91m
GREEN		:= \033[0;92m
YELLOW		:= \033[0;93m
BLUE		:= \033[0;94m
MAGENTA		:= \033[0;95m
CYAN		:= \033[0;96m
WHITE		:= \033[0;97m

# ============================================================================
# COMMANDS
# ============================================================================

AR			:= @/bin/ar rcs
ECHO		:= @echo 
MKDIR		:= @/bin/mkdir
RM			:= @/bin/rm -rf

# ============================================================================
# INCLUDES 
# ============================================================================

INC			:= -I ./inc/

# ============================================================================
# SOURCES
# ============================================================================

SRCS_DIR	:= srcs/

SRC_IS		:= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c

SRC_STR		:= ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strdup.c \
			   ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
			   ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
			   ft_strmapi.c ft_striteri.c

SRC_MEM		:= ft_memset.c ft_bzero.c ft_memcpy.c \
			   ft_memmove.c ft_memchr.c ft_memcmp.c

SRC_CNV		:= ft_toupper.c ft_tolower.c ft_atoi.c ft_itoa.c ft_utoa_base.c 

SRC_ALLOC	:= ft_calloc.c ft_arena.c

SRC_FD		:= ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRC_LST		:= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			   ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			   ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

SRC_PRINTF	:= ft_printf.c ft_printchar.c ft_printstr.c ft_printptr.c ft_printnbr.c \
				ft_printunb.c ft_printhex.c itoa_base_buffer.c utoa_base_buffer.c

SRCS		:= $(SRC_IS) $(SRC_STR) $(SRC_MEM) $(SRC_CNV) $(SRC_ALLOC) $(SRC_FD) \
				$(SRC_LST) $(SRC_PRINTF)

# ============================================================================
# OBJECTS
# ============================================================================

OBJS_DIR	:= objs/

OBJ_PRINTF	:= $(addprefix $(OBJS_DIR)/printf/, $(SRC_PRINTF:.c=.o))

OBJS		:= $(addprefix $(OBJS_DIR), $(SRCS:.c=.o)) 

# ============================================================================
# RULES
# ============================================================================

all:			$(NAME)

$(NAME):		$(OBJS)
				$(AR) $(NAME) $(OBJS)
				$(ECHO) "$(GREEN)Archive is ready :)$(RESET)"

$(OBJS_DIR)%.o:	$(SRCS_DIR)%.c
				$(MKDIR) -p $(dir $@)
				$(ECHO) "$(YELLOW)Now compiling: $< $(RESET)"
				$(CC) $(FLAGS) $(INC) $< -o $@
				$(ECHO) "$(GREEN)$< created $(RESET)"

clean:
				$(RM) $(OBJS_DIR)
				$(ECHO) "$(RED)Object removed!$(RESET)"

fclean: 		clean
				$(RM) $(NAME)
				$(ECHO) "$(RED)Archive removed!$(RESET)"

re: 			fclean all
				$(ECHO) "$(BLUE)Cleaned and rebuilt everything :)$(RESET)"

.PHONY: all clean fclean re
