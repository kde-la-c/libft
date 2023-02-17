# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kde-la-c <kde-la-c@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 10:57:13 by kde-la-c          #+#    #+#              #
#    Updated: 2023/01/11 10:57:17 by kde-la-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
SRC			= ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_memset.c\
			ft_memmove.c\
			ft_memcpy.c\
			ft_bzero.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strnstr.c\
			ft_atoi.c\
			ft_calloc.c\
			ft_strdup.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_split.c\
			ft_itoa.c\
			ft_strmapi.c\
			ft_striteri.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\

BSRC		= ft_lstnew_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstmap_bonus.c\

OBJS		= $(SRC:%.c=%.o)
BOBJS		= $(BSRC:%.c=%.o)
INCLUDE		= libft.h
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar
AFLAGS		= rc
RM			= rm
RFLAGS		= -f

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDE)
			@$(AR) $(AFLAGS) $(NAME) $(OBJS) $(INCLUDE)
			@echo "\033[0;32m--- Library compiled successfully! ---\033[0m"

bonus:		$(BOBJS) $(NAME)
			@$(AR) $(AFLAGS) $(NAME) $(BOBJS)
			@echo "\033[0;32m--- Bonus files added successfully! ---\033[0m"

clean:
			$(RM) $(RFLAGS) $(OBJS) $(BOBJS)
			@echo "\033[0;32m--- Objects cleaned successfully! ---\033[0m"

fclean:		clean
			$(RM) $(RFLAGS) $(NAME)
			@echo "\033[0;32m--- Archive cleaned successfully! ---\033[0m"

re:			fclean all

.PHONY:		all clean fclean re bonus
